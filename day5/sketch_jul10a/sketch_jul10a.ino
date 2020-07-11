// LCD + 조도센서

#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
}

void loop() {
  digitalWrite(2,LOW);
  delayMicroseconds(2);
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);

  long duration = pulseIn(3,HIGH);

  if(duration == 0) {
    return;
  }

  long distance = duration / 58.2;

  int light = analogRead(A0);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("light: ");
  lcd.print(light);
  lcd.setCursor(0,1);
  lcd.print("Distance: ");
  lcd.print(distance);
  lcd.print("cm");

  delay(100);

}
