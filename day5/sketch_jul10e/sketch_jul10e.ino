// 서브 모터 + 초음파 센서

#include <Servo.h>
Servo myservo;

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  myservo.attach(9);
  myservo.write(180);
}

void loop() {
  digitalWrite(2,LOW);
  delayMicroseconds(10);
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);

  long distance = pulseIn(3,HIGH) / 58;

  if(distance < 30) {
    myservo.write(180);
    delay(1000);
  }
  else{
    myservo.write(0);
    delay(1000);
  }
  delay(1000);
}
