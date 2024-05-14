#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Merhabalar");
}

void loop() {
  lcd.scrollDisplayRight(); // sağa kaydır
  //lcd.scrollDisplayLeft(); // sola kaydır
  delay(250);
}
