const int ledPinleri[] = {2, 3, 4, 5, 6, 7, 8}; // LED pinleri
const int ledSayisi = 7; // LED sayısı

void setup() {
  for (int i = 0; i < ledSayisi; i++) {
    pinMode(ledPinleri[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < ledSayisi; i++) {
    digitalWrite(ledPinleri[i], HIGH);
    delay(500);
    digitalWrite(ledPinleri[i], LOW);
  }
  delay(1000); // Bir sonraki dizi elemanına geçmeden önce bekleme süresi
}
