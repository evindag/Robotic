#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("");
}

void loop() {
  lcd.print("hello, world!");
  delay(1000);
  lcd.clear();
  delay(500); 
  lcd.print("hello, Evin!");
  delay(1000); 
  lcd.clear();
  delay(500);
}
