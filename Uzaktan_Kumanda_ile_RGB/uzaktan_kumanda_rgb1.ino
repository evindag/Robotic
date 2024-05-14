#include <IRremote.h>
int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
long bkirmizi = 0xFD08F7;// Kırmızı renk için kullanılan U.K. kodu
long byesil = 0xFD8877;// Yeşil renk için kullanılan U.K. kodu
long bmavi = 0xFD48B7;// Mavi renk için kullanılan U.K. kodu
long bsari = 0xFD28D7;// Sarı renk için kullanılan U.K. kodu
long bmor = 0xFDA857;// Mor renk için kullanılan U.K. kodu
long bturkuaz = 0xFD6897;// Turkuaz renk için kullanılan U.K. kodu
long bbeyaz = 0xFD18E7;// Beyaz renk için kullanılan U.K. kodu
long bsiyah = 0xFD9867;// LED’lerin sönmesi için kullanılan U.K. kodu
void setup()
{
pinMode(3, OUTPUT);//Kırmızı
pinMode(5, OUTPUT);//Yeşil
pinMode(6, OUTPUT);//Mavi
Serial.begin(9600);
irrecv.enableIRIn();//IR alıcıyı başlatır.
}
void loop() {
if (irrecv.decode(&results)) {
 Serial.println(results.value, HEX);
 if (results.value== bkirmizi) {
 digitalWrite(3,1);
 digitalWrite(5,0);
 digitalWrite(6,0);
 }
 if (results.value== byesil) {
 digitalWrite(3,0);
 digitalWrite(5,1);
 digitalWrite(6,0);
 }
 if (results.value== bmavi) {
 digitalWrite(3,0);
 digitalWrite(5,0);
 digitalWrite(6,1);
   }
 if (results.value== bsari) {
 digitalWrite(3,1);
 digitalWrite(5,1);
 digitalWrite(6,0);
 }
 if (results.value== bmor) {
 digitalWrite(3,1);
 digitalWrite(5,0);
 digitalWrite(6,1);
 }
 if (results.value== bturkuaz) {
 digitalWrite(3,0);
 digitalWrite(5,1);
 digitalWrite(6,1);
 }
 if (results.value== bbeyaz) {
 digitalWrite(3,1);
 digitalWrite(5,1);
 digitalWrite(6,1);
 }
 if (results.value==bsiyah) {
 digitalWrite(3,0);
 digitalWrite(5,0);
 digitalWrite(6,0);
 }
 irrecv.resume();// Sıradaki değeri algılar.
}
}