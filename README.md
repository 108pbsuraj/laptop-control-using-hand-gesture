# laptop-control-using-hand-gesture
>## Overview.
>>As the technology tends to make human life easier and safer. So our main aim is to reduce the effort of interaction with computers through input devices using simple gestures.<br/>
>>You might have seen Hand Gesture Controlled Robots, where the motion of a robot is controlled by the gestures of the hand. Another interesting project based on a similar principle is an Arduino based Hand Gesture Control of your computer or laptop.<br/>
>>Instead of using a keyboard, mouse or joystick, we can use our hand gestures to control certain functions of a computer like play/pause a video, move left/right in a photo slide show, scroll up/down.<br/>
>>In this project, we have implemented a simple Arduino based hand gesture control where you can control few functions of your web browser like switching between tabs, scrolling up and down in web pages, shift between tasks (applications), play or pause a video and increase or decrease the volume (in VLC Player) with the help of hand gestures.
> ## Concept Behind the Project.
>>Use Ultrasonic sensors(HC-SR04) and programmed Arduino UNO in such a way that when user places his hand in front of ultrasonic sensor it calculates the distance between hand and ultrasonic sensor, using the ultrasonic waves. Using this information, relevant actions can be performed in the computer. To perform action Python libraries PyAutoGUI and PySerial are used. The commands from Arduino UNO are sent to the computer through serial port (USB). This data will be then read by python which is running on the computer and based on the read data an action will be performed.
> ## Software Required.
>>* Install [PyAutoGUI](https://pypi.org/project/PyAutoGUI/) and [PySerial](https://pypi.org/project/pyserial/) in Python.<br />
>>* Install [Arduino IDE](https://www.arduino.cc/en/Main/Software).<br />
> ## Hardware Required.
>> * [Arduino UNO](https://store.arduino.cc/usa/arduino-uno-rev3).<br/>
>> * [Ultrasonic Sensors](https://robu.in/product/hc-sr04-ultrasonic-range-finder/?gclid=CjwKCAjw7O_pBRA3EiwA_lmtfhdPhclsBEp8riz5Os2FtJFf30t5UDnhAv21UPSZosoca0b1NaYAUBoCkY4QAvD_BwE).<br/>
>> * [Jumper Wires](https://robu.in/product/10cm-male-male-breadboard-jumper-dupont-2-54mm-1p-1p-cable-40-pcs/?gclid=CjwKCAjw7O_pBRA3EiwA_lmtfgbsVQTj2kGlzIAA7qb7-5LkZTz87cXwq5MkohiqGgTeiT6JLM-iNBoCqy0QAvD_BwE).<br/>
> ## Schematic Diagram.
>> ![](arduino-schematic.png)
> ## Hardware setup on Laptop.
>> ![](ardunosetuponlapto.jpeg)
> ## Contributors
>> * [Suraj Kumar](https://github.com/108pbsuraj)
>> * [Shivraj Dhonde](https://github.com/ShivrajDhonde)
>> * [Jatin Pardhi](https://github.com/jatinpardhi)
>> * [Rishabh Runwal](https://github.com/rishabh-runwal)
>> * [Aadesh Varude](https://github.com/AadeshVarude)
