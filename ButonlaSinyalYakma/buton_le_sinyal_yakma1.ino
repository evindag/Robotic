int buttonState = 0;
void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(2); 
  // buton değerinin durumunu oku.
  // butona basılıp basılmadığını kontrol et.
  if(buttonState == HIGH)
  	{
    	digitalWrite(13,HIGH); // Ledi aç
  	}
  else
    {
        digitalWrite(13,LOW); // Ledi kapat
  	}
  delay(10); //bekle
    
}