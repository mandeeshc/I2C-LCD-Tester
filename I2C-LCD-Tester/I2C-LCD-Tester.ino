// ESP8266 or ARDUINO with 16x2 i2c LCD
// Compatible with the Arduino IDE 1.8.3
// Library https://github.com/lucasmaziero/LiquidCrystal_I2C
// Original Library https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library
// Standard for ESP8266 with 4-SDA 5-SCL or ARDUINO with A4-SDA A5-SCL and LCD 16x2 display
// and access from ESP8266: lcd.begin(sda,scl) or ARDUINO: lcd.begin()

#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for the required display
LiquidCrystal_I2C lcd(0x27, 20, 4); // 20x4 LCD, modify for 16x2 LCD

void setup()
{
  // initialize the LCD
  lcd.begin(); //Init with pin default ESP8266 or ARDUINO
  //lcd.begin(0, 2); //ESP8266-01 I2C with pin 0-SDA 2-SCL

  // Turn on the blacklight and print a message.
  lcd.backlight();
  
  lcd.setCursor(0, 0);
#if defined(ESP8266)
  lcd.print("ESP8266");
#else
  lcd.print("ARDUINO FOUND HERE!!");
#endif
  // Testing code for 20x4 LCD display
  lcd.setCursor(0, 1);
  lcd.print("Hello, world! 012345");
  // Remove the following lines for 16x2 display
  lcd.setCursor(0, 2);
  lcd.print("Hello, Earth! 012345");
  lcd.setCursor(0, 3);
  lcd.print("Hello, India! 012345"); 
}

void loop()
{
  // Do nothing here...
}
