#include <LiquidCrystal.h> // LiquidCrystal kütüphanesini projeye ekle

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD ekran nesnesi oluşturuluyor ve hangi pinlere bağlı olduğu belirtiliyor

void setup() {
  lcd.begin(16, 2); // LCD ekranın boyutunu (16x2) belirle ve başlat
  lcd.print(""); // LCD ekranı başlangıçta boş bir string ile temizle
}

void loop() {
 int i; // döngü için sayaç değişkeni

 for (i = 0; i <= 16; i++) // i değişkeni 0'dan 16'ya kadar artarak döngüyü çalıştır
 {
   lcd.clear(); // LCD ekranını temizle (tüm karakterleri ve satırları sil)
   lcd.setCursor(i, 0); // İmleci LCD ekranında i. sütunun 0. satırına getir
   lcd.print("Robotik ve Kodlama"); // "Robotik ve Kodlama" metnini yazdır

   delay(500); // 500 milisaniye bekle
 }
}
