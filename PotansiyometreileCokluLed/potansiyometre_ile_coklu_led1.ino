#define pot A2
#define marshall 3
#define rocky 4
#define rubble 5
#define chase 6
#define zuma 7
#define white 8

int potRead;

void setup()
{
  Serial.begin(9600);
  pinMode(marshall, OUTPUT);
  pinMode(rocky, OUTPUT);
  pinMode(rubble, OUTPUT);
  pinMode(chase, OUTPUT);
  pinMode(zuma, OUTPUT);
  pinMode(white, OUTPUT);
}

void loop()
{
  potRead = analogRead(pot);
  Serial.print("Potantiometer: ");
  Serial.println(potRead);
  
  if(potRead<200){
    digitalWrite(marshall, 0);
    digitalWrite(rocky, 1);
    digitalWrite(rubble, 0);
    digitalWrite(chase, 0);
    digitalWrite(zuma, 0);
    digitalWrite(white, 0);
  }  
  if(potRead>200 && potRead<400){
   digitalWrite(marshall, 0);
   digitalWrite(rocky, 0);
   digitalWrite(rubble, 1);
   digitalWrite(chase, 0);
   digitalWrite(zuma, 0);
   digitalWrite(white, 0);
  }
  if(potRead>400 && potRead<600){
   digitalWrite(marshall, 0);
   digitalWrite(rocky, 0);
   digitalWrite(rubble, 0);
   digitalWrite(chase, 1);
   digitalWrite(zuma, 0);
   digitalWrite(white, 0);
  } 
    if(potRead>600 && potRead<800){
   digitalWrite(marshall, 0);
   digitalWrite(rocky, 0);
   digitalWrite(rubble, 0);
   digitalWrite(chase, 0);
   digitalWrite(zuma, 1);
   digitalWrite(white, 0);
  }
  if(potRead>800 && potRead<1000){
   digitalWrite(marshall, 0);
   digitalWrite(rocky, 0);
   digitalWrite(rubble, 0);
   digitalWrite(chase, 0);
   digitalWrite(zuma, 0);
   digitalWrite(white, 1);
  }
    if(potRead>1000){
   digitalWrite(marshall, 1);
   digitalWrite(rocky, 0);
   digitalWrite(rubble, 0);
   digitalWrite(chase, 0);
   digitalWrite(zuma, 0);
   digitalWrite(white, 0); 
  }
}
