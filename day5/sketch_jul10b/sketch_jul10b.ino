// 서브 모터 , 가변 저항
#include <Servo.h>
Servo myservo;

void setup() {
  myservo.attach(9);
}

void loop() {
  /*
  for(int i = 0 ; i < 120; i++ ) {
    myservo.write(i);
    delay(15);
  }
  myservo.write(0);
  delay(1000);*/
  
  
  // 가변 저항 사용
  int rad = map(analogRead(A0), 0, 1023, 0, 120);
  myservo.write(rad);
  delay(15);
}
