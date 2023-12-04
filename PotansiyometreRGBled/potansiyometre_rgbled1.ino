int val;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
 val=analogRead(A5);
 val=map(val,0,1023,0,3);
  switch (val){
    case 0:
    	digitalWrite(2,HIGH);
    	delay(100);
    	digitalWrite(2,LOW);
    break;
    case 1:
    	digitalWrite(3,HIGH);
    	delay(100);
    	digitalWrite(3,LOW);
    break;
    case 2:
    	digitalWrite(4,HIGH);
    	delay(100);
    	digitalWrite(4,LOW);
    break;
  }
  
}