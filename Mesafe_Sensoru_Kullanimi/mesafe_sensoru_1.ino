#define trig 6  // Ultrasonik sensörün trig pininin Arduino'daki pin numarası
#define echo 7  // Ultrasonik sensörün echo pininin Arduino'daki pin numarası

void setup() {
  Serial.begin(9600);  // Seri portu başlat, mesafe değerlerini göndermek için
  pinMode(trig, OUTPUT);  // Trig pinini çıkış olarak ayarla
  pinMode(echo, INPUT);   // Echo pinini giriş olarak ayarla
}

void loop() {
  digitalWrite(trig, HIGH);  // Trig pinine yüksek sinyal göndererek sensörü tetikle
  delayMicroseconds(10);     // 10 mikrosaniye bekleme
  digitalWrite(trig, LOW);   // Trig sinyalini düşük seviyeye çekerek tetiği sonlandır

  float duration = pulseIn(echo, HIGH);  // Echo pini yüksek olduğu süreyi ölç ve değişkene ata
  
  // Mesafe hesaplama
  // Ultrasonik sensör, gönderilen ses dalgasının bir nesneye çarpıp geri dönme süresini ölçer.
  // Bu süre, nesnenin sensöre olan mesafesine bağlıdır.
  // Ses hızı 340m/s civarındadır. Bu nedenle, mesafe = süre * ses hızı / 2 formülü kullanılır.
  // 2'ye bölme işlemi, sesin nesneye gidip geri dönme süresini ikiye böler.
  float distance = duration * 0.034 / 2;  // Süreyi mesafeye dönüştür
  
  // Sonuçları seri porta gönder
  Serial.println(distance);  // Hesaplanan mesafeyi seri porta yazdır
  
  delay(300);  // 300 milisaniye bekle, ardından tekrar mesafe ölçümü yap
}
