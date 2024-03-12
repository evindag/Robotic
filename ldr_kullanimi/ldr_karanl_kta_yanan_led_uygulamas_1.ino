const int ldrPin = A1;  // LDR'nin bağlı olduğu analog pin
const int ledPin = 2; // LED'in bağlı olduğu dijital pin

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // LDR'den okunan değeri al
  int ldrValue = analogRead(ldrPin);

  // Işık seviyesini seri monitöre yazdır (isteğe bağlı)
  Serial.begin(9600);
  Serial.print("LDR Degeri: ");
  Serial.println(ldrValue);

  // Eğer ışık seviyesi belirli bir eşik değerinden düşükse
  // LED'i yak, aksi takdirde söndür
  if (ldrValue < 660) {  // Eşik değeri isteğe bağlı olarak ayarlayabilirsiniz
    digitalWrite(ledPin, LOW); // LED'i yak
  } else {
    digitalWrite(ledPin, HIGH); // LED'i söndür
  }

  delay(1000); // Bir saniye bekleme süresi (isteğe bağlı)
}
