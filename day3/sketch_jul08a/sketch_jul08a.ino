// 조도 센서 종합
void setup() {
  Serial.begin(9600);   // 시리얼 통신 속도 설정하기
}

void loop() {
  char pr[12];
  sprintf(pr,"Light = %d", analogRead(A0));
  Serial.println(pr);
  delay(200);
  
  int light = analogRead(A0);
  int ledLight1 = map(light,400,1000,255,0);
  int ledLight2 = map(light,400,1000,0,255);
  analogWrite(9,ledLight1);
  analogWrite(10,ledLight2);

  int hertz = map(light,400,1000,31,4978);  // 가청 음역대 31~4978
  tone(8,hertz,100);
  delay(100);
  noTone(8);
  delay(100);
  
}
