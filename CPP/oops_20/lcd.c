#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0*27, 16, 2);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.setCursor(0, 0);
  lcd.print("SET UP....");
  lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("LCD");
  lcd.setCursor(0, 1);
  lcd.print("DISPLAY");
  delay(2000);
}