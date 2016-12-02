#include <Wire.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(23, 24, 24, 26, 27, 28);



void setup() {
  Serial.begin(9600);
    Wire.begin();
  // put your setup code here, to run once:
lcd.begin(16, 2);
  lcd.print("we are from ");
  
}

void loop() {
  // put your main code here, to run repeatedly:
 lcd.setCursor(0, 1);
  lcd.print("robomechtrix");
}
