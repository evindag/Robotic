void setup() {
  Serial.begin(9600); 
}

void loop() {
  if (Serial.available()) {
    char girilenDeger = Serial.read();
    Serial.print("Girilen Değer: ");
    Serial.println(girilenDeger);

    if (girilenDeger == 'H' || girilenDeger == 'h' ) {  
      Serial.println("Hello World!");
    }
  }
}
