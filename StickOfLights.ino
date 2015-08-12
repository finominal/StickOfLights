#include <Flash.h>

#include "FastLED.h"
#include <EEPROM.h>
 #include <avr/pgmspace.h>
 
 
#define DATAPIN 1
#define p(x) Serial.print(x)
#define pl(x) Serial.println(x)
 
 
//control
//const int LEDCOUNT= 51;//BikeBeacon
const int LEDCOUNT= 46;//BikeBeacon
//const int LEDCOUNT = 12;//Hood
//const int LEDCOUNT = 48;//scarf
CRGB leds[LEDCOUNT];
 
byte eepromAddress = 0;
int program = 0; //zero based
int numberOfPrograms = 7;
 
//Colors
volatile uint16_t brightness = 100;
 
 
 
//Plasma
float movement = 0;
float movementFactor = 0.01031;
float size = 10;
float mapMin = -100;
float mapMax = 100;
float r,g,b,shade;
 
 
 //leds
volatile uint32_t red = Color(brightness,0,0);
volatile uint32_t green = Color(0,brightness,0);
volatile uint32_t blue = Color(0,0,brightness);
volatile uint32_t black = Color(0,0,0);
volatile uint32_t pink = Color(brightness,brightness/8,brightness/2);
volatile uint32_t aqua = Color(0,brightness/2,brightness/2);
volatile uint32_t yellow = Color(brightness/2,brightness/2,0);

void setup()
{
  delay(1000);
  Serial.begin(115200);
  Serial.println("*** RESET ***");
 
  FastLED.addLeds<WS2811, DATAPIN, GRB>(leds, LEDCOUNT);
  //FastLED.addLeds<WS2801,2, 3, RGB>(leds, LEDCOUNT);
 
  movement = random(0,20)/0.7; //randomize start pattern
  GetProgram();
  InitializeBalls();
 
}
 
void loop()
{
 serialEvent();

switch(program)
{
   case 0:
    pl("balls");
    BouncingBalls();
    break;
  case 1:
  pl("RainbowMorphing");
    RainbowMorphing();
    break;
  case 2:
  pl("Rainbow");
    Rainbow();
    break;
  case 3:
  pl("AquaCentred");
    AquaCentred();
    break;
  case 4:
  pl("RedMorphing");
    RedBlue();
    break;
  case 5:
  pl("Pink");
    Pink();
    break;
  case 6:
    pl("Fire");
    Fire();
    break;
  case 7:
    pl("TestPlasma");
    TestPlasma();
    break;
}
 FastLED.show();
}
 
 
void GetProgram()
{
  byte storedProg = EEPROM.read(eepromAddress);
  Serial.print("Program Found: "); Serial.println(storedProg);
  
  if(storedProg >= numberOfPrograms-1)
  {
    EEPROM.write(eepromAddress, 0);
  }
  else
  {
    storedProg++;
    EEPROM.write(eepromAddress, storedProg);
 }
 
  program = EEPROM.read(eepromAddress);
  Serial.print("Program Running: "); Serial.println(program);
}
 
 
 
void ClearAll()
{
  for(int i = 0; i<LEDCOUNT; i++) leds[i] = 0;
}
 
 
 
 
 
/*
void CheckForButtonPress()
{
  if(digitalRead(encoderButton) == LOW)
  {
    delay(1);
   
    if(digitalRead(encoderButton) == LOW) //if low, we have debounced
    {
      switch(CURRENT_PROGRAM)
      {
        case bouncingBalls:
          CURRENT_PROGRAM = bouncingBalls;
          
          break;
        case threeEntities:
          CURRENT_PROGRAM = threeEntities;
          break;
 
      }
     
      while(digitalRead(encoderButton) == LOW)//wait for button release
      {
        pl("wait");
        delay(25);
        digitalWrite(13,HIGH);
        delay(25);
        digitalWrite(13,LOW);
      }//wait for release
      pl("BtnRelease");
 
   
      ClearBuffer();
      WriteBufferToStrip();
    }
  }
}
 
*/
 
