//by Druhi Chakraborty
#include "DHT.h"
#define DHTPIN D4// you  can use 
#define DHTTYPE DHT11//#define DHTTYPE DHT21
                     //#define  DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);//you can also use pins 3, 4, 5, 12, 13  or 14
   // Pin 15 can work but DHT must be disconnected during program upload
#include  <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  dht.begin();// initialize the sensor
 lcd.backlight();// turn on lcd backlight
  lcd.init();// initialize lcd
}
void loop() {
 lcd.clear();
   lcd.setCursor(0,0);//  set the cursor on the first row and column
   lcd.print("Humi = ");
   lcd.print((float)dht.readHumidity());//print  the humidit
   lcd.print(" %");
   lcd.setCursor(0,1);//set the cursor on  the second row and first column
   lcd.print("Tempe = ");
  s lcd.print((float)dht.readTemperature());//print  the temperature
   lcd.print(" C");
   delay(2000);
   lcd.clear();
}