void setup() {
Serial.begin(9600);
}
void loop() {

  String aylar[8]={"Ocak","Şubat","Mart","Nisan","Mayis"};
  aylar[5]="Haziran";
  aylar[6]="Temmuz";
  aylar[7]="Agustos";
  
  int i;
for (i=0;i<=7;i++)
  Serial.println(aylar[i]);
  delay(1000);
}