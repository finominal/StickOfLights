
void Rainbow()
{
 
  for(int i = 0; i<LEDCOUNT; i++)
  {
    //memset(leds, 0, LEDCOUNT * 3);
 
    shade = SinVerticle(i,0,size)
            + SinRotating(i,0,size)
            + SinCircle(i,0, size)
            ;
           
    leds[i] = CHSV(mapLed(shade), 255, brightness);
    //leds[i].g += leds[i].r*abs(sin(movement));
    //leds[i].b += leds[i].r*abs(cos(movement/3));
   
    //leds[i].r = map( sin(shade*PI)*100, mapMin, mapMax, 0, brightness);
    //leds[i].g = 0; //map( sin(shade*PI+2*PI*sin(movement/23))*100, mapMin, mapMax, 0, brightness);
    //leds[i].b = map( sin(shade*PI+4*PI*sin(movement/20))*100, mapMin, mapMax, 0, brightness); 
  }
  movement+=movementFactor;
}
 
void RainbowMorphing()
{
 
  CRGB buffer;
  for(int i = 0; i<LEDCOUNT; i++)
  {
    //memset(leds, 0, LEDCOUNT * 3);
 
    shade = //SinVerticle(i,0,size)
            + SinRotating(i,0,size)
            + SinCircle(i,0, size)
            ;
           
    leds[i] = CHSV(mapLed(shade), 255, brightness);
   
    int mg = 86 * abs(sin(movement/2));
    int mb = 86 * abs(cos(movement/4));
    //Serial.print(mg);Serial.print(" ");Serial.println(mb);
   
    //shift the blue
    buffer  = CHSV(mapLed(shade)-mg, 255, brightness);
    leds[i].b=buffer.b;
 
    //shift the grenn
    buffer = CHSV(mapLed(shade)+mb, 255, brightness);
    leds[i].g = buffer.g;
}
 
  movement+=movementFactor;
}
 
void RedGreen()
{
  int s = size *.7;
  for(int i = 0; i<LEDCOUNT; i++)
  {
    //memset(leds, 0, LEDCOUNT * 3);
 
    shade = SinVerticle(i,0,s)
            + SinRotating(i,0,s)
            + SinCircle(i,0, s)
            ;
   
    leds[i] = CHSV(mapLed(shade), 255, brightness);
    leds[i].b = 0;
    leds[i].g += leds[i].r*abs(sin(movement/5));
 
  }
  movement+=movementFactor;
  CheckForSerialProgram();
}
 
 
void RedBlue()
{
  for(int i = 0; i<LEDCOUNT; i++)
  {
    shade = //SinVerticle(i,0,size)
            + SinRotating(i,0,size)
            + SinCircle(i,0, size)
            ;
 
    leds[i] = CHSV(mapLed(shade), 255, brightness);
    leds[i].g=0;
  }
  movement+=movementFactor;
  CheckForSerialProgram();
}
 
void BlueGreen()
{
  int s = size *.7;
  for(int i = 0; i<LEDCOUNT; i++)
  {
    shade = //SinVerticle(i,0,size)
            //+ SinRotating(i,0,size)
            + SinCircle(i,0, s)
            ;
   
    leds[i] = CHSV(mapLed(shade), 255, brightness);
    leds[i].r=0;
  
    
   }
   movement+=movementFactor;
   CheckForSerialProgram();
}
 
void RedMorphing()
{
  for(int i = 0; i<LEDCOUNT; i++)
  {
    shade = //SinVerticle(i,0,size)
            + SinRotating(i,0,size/2)
            + SinCircle(i,0, size)
            ;
 
      leds[i] = CHSV(mapLed(shade), 255, brightness);
      leds[i].g = 0;
      leds[i].b = leds[i].r*abs(sin(movement/2));
   }
   movement+=movementFactor;
   CheckForSerialProgram();
}

 void Pink()
{
  for(int i = 0; i<LEDCOUNT; i++)
  {
    shade = //SinVerticle(i,0,size)
            + SinRotating(i,0,size)
            + SinCircle(i,0, size)
            ;
 
      leds[i] = CHSV(mapLed(shade), 255, brightness);
      leds[i].g = leds[i].r/8;
      leds[i].b = leds[i].r/2;
   }
   movement+=movementFactor;
   CheckForSerialProgram();
}
 
void AquaCentred()
{
  for(int i = 0; i<LEDCOUNT; i++)
  {
  shade = //SinVerticle(i,0,size)
            //+ SinRotating(i,0,size)
            + SinCircleCentred(i,0, size/2)
            ;
   leds[i] = CHSV(mapLed(shade), 255, brightness);
   leds[i].r = 0;
   leds[i].g = leds[i].b;
   
    }
    movement+=movementFactor/2;//bit faster5
}
 
 
float SinVerticle(float x, float y, float size)
{
  return sin(x / size + movement);
}
float SinRotating(float x, float y, float size)
{
  return sin( (x * sin(movement/2 ) + y * cos(movement/5)) /size ) ;
}
float SinCircle(float x, float y, float size)
{
  float cx = LEDCOUNT * sin(movement/7);
  float cy = LEDCOUNT * cos(movement/2);
  float dist = sqrt(sq(cy-y) + sq(cx-x));
 
  return sin((dist/size ) + (movement) );
}
 
float SinCircleCentred(float x, float y, float size)
{
  float cx = (LEDCOUNT/2)-.5;
  float cy = 0;
  float dist = sqrt(sq(cy-y) + sq(cx-x));
 
  return sin((dist/size ) + (movement) );
}
 
void SelfCorrectMapping()
{
    //self correct mapping values to use maximum led resolution
    if(shade*100 < mapMin) mapMin = shade*100;
    if(shade*100 > mapMax) mapMax = shade*100;
}
 
// Create a 24 bit color value from R,G,B
uint32_t Color(byte r, byte g, byte b)
{
  uint32_t c;
  c = r;
  c <<= 8;
  c |= g;
  c <<= 8;
  c |= b;
  return c;
}

void CheckForSerialProgram()
{
serialEvent();
}
 
void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    int inByte = Serial.read();
    Serial.print("DataRecieved: "); Serial.println(inByte);
    inByte -= 48;
    Serial.print("DataModified: "); Serial.println(inByte);
     if(inByte <numberOfPrograms)
     {
       program = inByte;
       Serial.print("Program Set as "); Serial.println(inByte);
     }
  }
}
 
int mapLed(float s)
{
  return map(shade*100 ,mapMin, mapMax, 0, 255);
}
 
