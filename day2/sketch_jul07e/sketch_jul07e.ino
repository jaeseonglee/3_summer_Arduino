int pins[] = {2,3,4};
int notes[] = {262,294,330}; // 도레미

void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
}

void loop() {
  if(digitalRead(2) == HIGH) {
    tone(8,notes[0], 100);
    delay(100);
    noTone(8);
  }
  if(digitalRead(3) == HIGH) {
    tone(8,notes[1], 100);
    delay(100);
    noTone(8);
  }
  if(digitalRead(4) == HIGH) {
    tone(8,notes[2], 100);
    delay(100);
    noTone(8);
  }

}
