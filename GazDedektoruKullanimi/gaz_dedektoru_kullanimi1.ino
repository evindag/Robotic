int gazPin = A0; // Gaz sensörünün analog pin bağlantısı

void setup(){
  Serial.begin(9600);
}

void loop(){
  int gazDegeri = analogRead(gazPin); // Gaz sensöründen okunan değer
  Serial.print("Gaz Degeri: ");
  Serial.println(gazDegeri);

  delay(1000); // 1 saniye bekle
}