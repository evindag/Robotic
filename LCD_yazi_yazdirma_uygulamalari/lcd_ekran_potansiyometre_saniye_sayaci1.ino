#include <LiquidCrystal.h> // LiquidCrystal kütüphanesini projeye ekle

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD ekran nesnesi oluşturuluyor ve hangi pinlere bağlı olduğu belirtiliyor

void setup() {
  lcd.begin(16, 2); // LCD ekranın boyutunu (16x2) belirle ve başlat
  lcd.print(""); // LCD ekranı başlangıçta boş bir string ile temizle
}

void loop() {
lcd.setCursor(0, 1); // konumu belirler 0. sütununda ve 1. satırında
lcd.print(millis() / 1000);
// Arduino kartının başlatıldığından bu yana geçen milisaniyeyi döndürür.
//Bu değer 1000'e bölünerek saniye cinsine dönüştürülür. 

 }

