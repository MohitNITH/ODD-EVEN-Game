#include<Servo.h>
int number;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

void setup() {
Serial.begin(9600);
pinMode(2,INPUT);
pinMode(13,OUTPUT);
servo1.attach(3);
servo2.attach(5);
servo3.attach(6);
servo4.attach(9);
servo5.attach(10);
}

void loop() {
  if(digitalRead(2)==LOW)
  {
    number = random(1,50);
    Serial.println(number);
    digitalWrite(13,HIGH);
    if(number>=1 && number<=10)
    {
      servo1.write(180);
      delay(1500);
      }
    else if(number>=11 && number<=20)
    {
      servo2.write(180);
      delay(1500);
      }
    else if(number>=21 && number<=30)
    {
      servo3.write(180);
      delay(1500);
      }
    else if(number>=31 && number<=40)
    {
      servo4.write(180);
      delay(1500);
      }
    else if(number>=41 && number<=50)
    {
      servo5.write(180);
      delay(1500);
      }
    else 
      digitalWrite(13, LOW);
      servo1.write(0);
      servo2.write(0);
      servo3.write(0);
      servo4.write(0);
      servo5.write(0);
  }
  digitalWrite(13, LOW);
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
        
}