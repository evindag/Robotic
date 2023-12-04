//defining pins for the inputs and outputs
const int gas_input = A0;
int gas = 0;
const int led = 6;
const int buzzer = 12;

void setup()
{
  //setting up the correct pin modes
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  //initializing the serial monitor
  Serial.begin(9600);
}

void loop()
{
  //read the input from mq2 gas sensor
  gas  = analogRead(gas_input);
  //print the input om serial monitor
  Serial.println(gas);
  //remapping the value of input from mq2 to 0-255
  int led_out = map(gas, 80, 400, 0, 255); 
  // int led_out = min(gas,255);
  
  //send the output to buzzer
  tone(buzzer,led_out,100);
  //send the pwm signal to led
  analogWrite(led,led_out);
  //delay of 100ms
  delay(100);
}	