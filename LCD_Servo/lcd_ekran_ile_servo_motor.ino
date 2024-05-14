#include <Servo.h>
#include <LiquidCrystal.h>

Servo servoMotor;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int servoPin = 10;
int angle = 0; //servo motor başlangıç açısı

void setup() {
  servoMotor.attach(servoPin);
  lcd.begin(16, 2);
}

void loop() {
  for (angle = 0; angle <= 180; angle += 10) {
    servoMotor.write(angle);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Servo Acisi:");
    lcd.setCursor(0, 1);
    lcd.print(angle);
    delay(500);
  }
  for (angle = 180; angle >= 0; angle -= 10) {
    servoMotor.write(angle);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Servo Acisi:");
    lcd.setCursor(0, 1);
    lcd.print(angle);
    delay(500);
  }
}