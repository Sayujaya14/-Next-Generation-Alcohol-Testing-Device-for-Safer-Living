#include <LiquidCrystal_I2C.h>
#define sensorDigital A0

LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup(){
    Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.clear();
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  delay(1000);
  lcd.setCursor(0, 0);
    delay(3000);
  lcd.clear();
}
void loop(){
  bool digital = digitalRead(sensorDigital);
  if(digital==1){
    lcd.setCursor(0, 1);
    lcd.print("Alcohol Detected");
  }else{
    lcd.setCursor(0, 1);
    lcd.print("No Alcohol Detected");  
  }
}