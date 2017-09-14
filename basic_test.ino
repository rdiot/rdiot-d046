/* LCD2004 I2C Green (LCD2004A) [D046] : http://rdiot.tistory.com/229 [RDIoT Demo] */
 
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
 
LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x20 for a 16 chars and 2 line display
 
void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(4,0);
  lcd.print("Hello, World");
  lcd.setCursor(2,1);
  lcd.print("LCD2004 I2C TEST");
   lcd.setCursor(0,2);
  lcd.print("Arduino LCM IIC 2004");
   lcd.setCursor(2,3);
  lcd.print("Always thank you.");
}

void loop()
{
}
