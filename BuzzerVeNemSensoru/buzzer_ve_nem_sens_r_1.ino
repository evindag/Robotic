int nem = 0; 



void setup()
{
  pinMode(A0, OUTPUT); 
  
  Serial.begin(9600);
 
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() 

{
  nem = analogRead(A0);

  Serial.println(nem);

  if(nem < 100) 
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    tone(11,523,1000);

  }
  else { 
    digitalWrite(13, LOW);
    digitalWrite(12,HIGH);
    noTone(11);
}
  delay(10);
}