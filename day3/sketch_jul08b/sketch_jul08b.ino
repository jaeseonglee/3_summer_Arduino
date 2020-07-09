// 스위치로 조절
void setup() {
 pinMode(10,INPUT);
 pinMode(8,OUTPUT);
}

void loop() {
  int light = analogRead(A0);
  if(digitalRead(10) == HIGH) {
    //analogWrite(9,0);
    digitalWrite(8,HIGH);
    delay(3000);
  }
  else{
    int ledLight = map(light,400,1000,255,0);
    
    if(ledLight < 127) {
      digitalWrite(8,LOW);
    }
    else{
      digitalWrite(8,HIGH);
    }
    
    //analogWrite(9,ledLight);
  }
 }
