#include <Wire.h>
#include <LiquidCrystal_I2C.h>
char array1[] = "      INOVATRIX";  // CHANGE THIS AS PER YOUR NEED 
char array2[] = "        LIKE";     // CHANGE THIS AS PER YOUR NEED 
char array3[] = "     SUBSCRIBE";   // CHANGE THIS AS PER YOUR NEED
char array4[] = "       SHARE";     // CHANGE THIS AS PER YOUR NEED

LiquidCrystal_I2C lcd(0x27, 20, 4); // CHANGE THE 0X27 ADDRESS TO YOUR SCREEN ADDRESS IF NEEDED
void setup()
{
  lcd.init();
  lcd.backlight();
  
  lcd.print(array1);                // BY DEFAULT CURSOR IS SET AT 0,0 ie, 0th ROW AND 0th COLUMN
  
  lcd.setCursor(0,1);
  lcd.print(array2);
  
  lcd.setCursor(0,2);
  lcd.print(array3);
  
  lcd.setCursor(0,3);
  lcd.print(array4);
}
void loop()
{}
