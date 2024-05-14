// Dizi boyutunu tanımla
const int renkSayisi = 7;

// Renkleri tanımla (gökkuşağının sırasıyla renkleri)
String renkler[renkSayisi] = {"Kirmizi", "Turuncu", "Sari", "Yesil", "Mavi", "Lacivert", "Mor"};

void setup() {
  // Seri iletişimini başlat
  Serial.begin(9600);

  // Renkleri ekrana yazdır
  for (int i = 0; i < renkSayisi; i++) {
    Serial.print("Renk ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.println(renkler[i]);
  }
}

void loop() {
  // Boş
}
