#include <LiquidCrystal.h>

const int rs = 12,en=11,d4=5,d5=4,d6 =3,d7=2;

LiquidCrystal lcd(rs, en, d4,d5, d6, d7);

void setup()
{
  lcd.begin(16, 2);
  
  lcd.print("ISIK siddeti");
}

void loop()
{
 
  int ldr = analogRead(A0);
  int seviye=map(ldr,150,600,0,100);
  lcd.setCursor(0, 1);
 
  lcd.print("%");
  delay(1000);
  lcd.setCursor(1,1);
  lcd.print(seviye);
}