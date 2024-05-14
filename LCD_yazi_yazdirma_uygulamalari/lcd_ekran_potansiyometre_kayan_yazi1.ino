#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("");
}

void loop() {
  String message = "Merhaba :)        ";
  int messageLength = message.length();
  
  for (int i = 0; i < messageLength; ++i) {
    lcd.clear();
    lcd.setCursor(0, 0);
    
    
    for (int j = i; j < i + 16; ++j) {
      lcd.print(message[j % messageLength]);
    }

    delay(200);
  }
  
  delay(1000);
}