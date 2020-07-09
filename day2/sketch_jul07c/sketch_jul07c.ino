// 스위치 
void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(8,INPUT);
}

void loop() {
  int value = digitalRead(8); // 변수 없어도 됨
  if(value == HIGH) {
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(12,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    delay(1000);
    digitalWrite(12,LOW);
    delay(1000);
    //delay(3000);  // delay 실행중이기 때문에 다른거 X
  }
  else {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
  }
  
}
