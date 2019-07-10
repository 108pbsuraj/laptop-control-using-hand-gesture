int Trigger_R=9;
int Echo_R=10;
int Trigger_L=4;
int Echo_L=5;

void setup() {
  Serial.begin(9600);
  pinMode(Trigger_R,OUTPUT);
  pinMode(Echo_R,INPUT);
   pinMode(Trigger_L,OUTPUT);
  pinMode(Echo_L,INPUT);
 }
float Distance(int Trigger,int Echo) /* To find the distance of hand*/
{
  float time1;
  float dist;
  digitalWrite(Trigger,LOW);
  delayMicroseconds(3);
  digitalWrite(Trigger,HIGH);
  delayMicroseconds(1000);
  digitalWrite(Trigger,LOW);
  time1 = pulseIn(Echo,HIGH);
  dist= time1*34/2000;
  if(dist>50)
  {dist=50;}
  delay(10);
  return(dist);
  }
 
void loop() 
{
  
  float distance1 =Distance(Trigger_R,Echo_R);
  float distance2 =Distance(Trigger_L,Echo_L);
 
 while(  distance1<20 &&  distance1>0 )
     { 
        delay(300);
        distance1 =Distance(Trigger_R,Echo_R);
        distance2 =Distance(Trigger_L,Echo_L);
        if( distance1 == 50 )                                  /To swipe hand on right sensor to change to the next page/
          {
            Serial.println("Forward");
            delay(1000);
           }
        distance1 =Distance(Trigger_R,Echo_R);
        distance2 =Distance(Trigger_L,Echo_L);
        if( distance1>0 && distance1<20 && distance2 == 50 )  /*Hand motion towards right sensor to scroll up */
          {
          Serial.println("Scroll_Up");
          delay(1);
          }
    } 
        
 if(distance1>25 && distance1<50 && distance2 == 50)   /Hand moving away from right sensor to scroll down/
  {
   Serial.println("Scroll_Down");
   delay(100);
   } 


      
while(  distance2<20 &&  distance2>0 )
     { 
        delay(300);
        distance1 =Distance(Trigger_R,Echo_R);
        distance2 =Distance(Trigger_L,Echo_L);
        if( distance2 == 50 )
          {
            Serial.println("Rewind");            /Hand swiping in front of left sensor to rewind the page/
            delay(1000);
           }
        distance1 =Distance(Trigger_R,Echo_R);
        distance2 =Distance(Trigger_L,Echo_L);
        if( distance2>0 && distance2<20 && distance1 == 50 ) /Hand moving towards the left sensor to change tab/
          {
          Serial.println("Change_Tab");
          delay(1000);
          }
    } 
        
 if(distance2>25 && distance2<50 && distance1 == 50)  /Hand away from the sensor to click the drop down list/
  {
   Serial.println("Drop_Down");
   delay(1000);
   } 
if((distance1>0 && distance1<50) && (distance2>0 && distance2<50))/both the hands in front of sensor to press enter/
{
  Serial.println("Enter");
  delay(1500);
}

delay(100);
  
}
