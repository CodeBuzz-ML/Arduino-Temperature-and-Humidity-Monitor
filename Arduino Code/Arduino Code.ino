#include <LiquidCrystal_I2C.h>

Wireless Temperature And Humidity Monitoring System With Mobile App
Mobile Application
Arduino IDE Code
#include <SoftwareSerial.h>
SoftwareSerial bt(8, 7); // RX, TX

LiquidCrystal_I2C lcd(0x27,16,2); //LCD Display Initialization
#include "dht.h"
#define dataPin A0
dht DHT;

int temp;
int hum;

void setup() {
 
Serial.begin(9600); 
bt.begin(9600); 
Serial.println("Ready");
lcd.begin(); //Beginning the LCD display
lcd.backlight(); //Turning on the LCD display backlight
}

void loop(){
  int readData = DHT.read11(dataPin);

  hum = DHT.humidity;
  temp = DHT.temperature;
  
  lcd.setCursor(0,0);
  lcd.print("Humidity: ");
  lcd.print(hum);
  lcd.print("% ");

  lcd.setCursor(0,1); 
  lcd.print("Temp: "); 
  lcd.print(temp); 
  lcd.print((char)223); //degree symbol
  lcd.print("C ");

 bt.print(temp); //send distance to MIT App
 bt.print(";");
 bt.print(hum); //send distance to MIT App 
 bt.println(";");
  
  delay(1000);
}