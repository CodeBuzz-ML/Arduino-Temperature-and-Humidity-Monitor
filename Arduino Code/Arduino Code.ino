#include <LiquidCrystal_I2C.h>


/*/
Code written by: - CodeBuzz (Please mention if you fork)
Project Name: - Arduino Humidity & Temperature Monitor (Using Bluetooth)
Code Language: - C++ (Arduino Variant)

Feel free to contact for any references: - advait.muley@icloud.com

Connections: - 
  Breadboard Power Rails are Powered
  **LCD I2C
    ***GND -> GND(On Breadboard Rail)
    ***VCC -> VCC(On Breadboard Rail)
    ***SDA -> A4 (On Arduino)
    ***SCL -> A5 (On Arduino)

  **Bluetooth Module (HC-05)
    ***VCC -> VCC (On Breadboard Rail)
    ***GND -> GND (On Breadboard Rail)
    ***Tx -> 7 (On Arduino)
    ***Rx -> 8 (On Arduino)

  **Temperature and Humidity Sensor (DHT 11)
    ***VCC -> VCC (On Breadboard Rail)
    ***GND -> GND (On Breadboard Rail)
    ***Signal -> A0 (On Arduino)

  For Enahnced Clarity, Refer to The Schematic Diagram Provided Separately
/*/

