//피에조 스피커

int notes[] = {392,392,330,349,392,440,440,392};
int times[] = {500,500,250,250,500,500,500,1000};

void setup() {
  for(int i = 0; i < 8; i++){
    tone(8, notes[i], times[i]);
    delay(times[i]);
    noTone(8);
  }
}

void loop() {
  

}
