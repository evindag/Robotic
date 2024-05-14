#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
lcd.begin(16, 2);
lcd.print("SICAKLIK");
}
void loop() {
int sensor = analogRead(A0);
float analog = sensor * 5.0;
 analog = analog /1024.0;
 float c = (analog - 0.5) * 100 ;
lcd.setCursor(0, 1);
lcd.print(c);
lcd.setCursor(5, 1);
lcd.print("C");
}