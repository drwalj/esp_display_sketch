/*************/

#include <LiquidCrystal_I2C.h>

// set the LCD number of columns and rows
int lcdColumns = 20;
int lcdRows = 4;

// set LCD address, number of columns and rows
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);  

void setup(){
  Serial.begin(9600);
  
  // initialize LCD
  lcd.init();
  // turn on LCD backlight                      
  lcd.backlight();
  Serial.print("swag");
}

void loop(){
  
  // set cursor to first column, first row
  lcd.setCursor(0, 0);
  // print message
  Serial.print("test");
  lcd.print("Hello There");
  delay(1000);
  // clears the display to print new message
  lcd.clear();
  // set cursor to first column, second row
  lcd.setCursor(0,1);
  lcd.print("Hello World");
  delay(1000);
  lcd.clear(); 
}
