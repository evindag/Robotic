void setup(){
  Serial.begin(9600);
}

void loop(){
  int dizi[] = {1,3,5,7,9};
 
for(int i = 0; i<5; i++){
  Serial.println(dizi[i]);
}
}