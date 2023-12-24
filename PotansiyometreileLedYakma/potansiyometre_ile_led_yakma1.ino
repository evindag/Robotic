int potantiometer=A5;
const int led=11; // const sabit değişkendir
int value;

void setup()
{
  pinMode(led , OUTPUT); 
  Serial.begin(9600);
  pinMode(potantiometer, INPUT);
}

void loop()
{
  value= analogRead(potantiometer);

  if(Serial.available()){
   Serial.println(value);
  }
  value=map(value,0,1023,0,255);
    analogWrite(led,value); 
  Serial.println(value);

}