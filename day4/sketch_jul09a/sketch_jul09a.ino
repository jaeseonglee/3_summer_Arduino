// 초음파 센서
void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);  pinMode(3,INPUT);
  //pinMode(5,OUTPUT);  pinMode(6,OUTPUT);  pinMode(7,OUTPUT);
  
}

void loop() {
  digitalWrite(2,LOW);
  delayMicroseconds(2);
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);

  long duration = pulseIn(3,HIGH);
  if(duration == 0){
    return;
  }
  
  long distance = duration / 58.2;
  char pr[12];
  sprintf(pr,"distance = %5d cm", distance);
  Serial.println(pr);
  
  if (distance < 10) {
    tone(8,450,1000);
    delay(1000);
    noTone(8);
    //digitalWrite(7,1);  digitalWrite(6,1);  digitalWrite(5,1);
  }
  else if ( distance < 20) {
    tone(8,330,1000);
    delay(1000);
    noTone(8);
    //digitalWrite(7,1);  digitalWrite(6,1);  digitalWrite(5,0);
  }
  else if ( distance < 30) {
    tone(8,262,1000);
    delay(1000);
    noTone(8);
    //digitalWrite(7,1);  digitalWrite(6,0);  digitalWrite(5,0);
  }
  else if ( distance > 30) {
    //digitalWrite(7,0);  digitalWrite(6,0);  digitalWrite(5,0);
  }

  
  delay(100);
  
}
