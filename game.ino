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
  // put your setup code here, to run once:

}

float Distance(int Trigger,int Echo)
{
  float time;
  float dist;
  digitalWrite(Trigger,LOW);
  delayMicroseconds(3);
  digitalWrite(Trigger,HIGH);
  delayMicroseconds(1000);
  digitalWrite(Trigger,LOW);
  time = pulseIn(Echo,HIGH);
  dist= time*34/2000;
  if(dist>50)
  {dist=60;}
  delay(10);
  return(dist);
  }
 
void loop() {
  
  float distance1 =Distance(Trigger_R,Echo_R);
  float distance2 =Distance(Trigger_L,Echo_L);

  if( 50>distance2 && distance2>0  && distance1 ==60)
  {
    Serial.println("Right");
    delay(200); 
  }
  if(50 > distance1 && distance2 >0 && distance2 ==60 )
  {
    Serial.println("Left");
    delay(200); 
  }

  if((distance1>0 && distance1<10) && (distance2>0 && distance2<10))    /*both the hands in front of sensor to press enter*/
{
  Serial.println("Down");
  delay(200);
}
   if((distance1>15 && distance1<50) && (distance2>15 && distance2<50))    /*both the hands in front of sensor to press enter*/
{
  Serial.println("Up");
  delay(400);
} 
  
  // put your main code here, to run repeatedly:
delay(100);
}
