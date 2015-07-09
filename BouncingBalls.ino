
int BALLTOP = LEDCOUNT ;

//objects
struct ball {
  CRGB color;
  volatile float loc; //location in mm
  volatile float lastLoc;
  volatile int lastLocCounter;
  volatile int pos;
  volatile float velocity;
  volatile bool bouncing; //bouncing, or moving up?
  volatile int wait;
  volatile int waiting;//current pause, count frames
  volatile float friction;
 
  //millis returns an unsigned long
  volatile unsigned long lastFrameTime;
  volatile unsigned long frameTime;
};
 
 
ball balls[3];
 
 
//physics
volatile float gravity = -9.8;
volatile float stickHeight = 1750;
volatile int bottom = 0;
 
 
 
void BouncingBalls()
{
  InitializeBalls();
  pl("BouncingBalls");
 
  while(program == 0) //repeat until power off
  {
   // PrintBallValues();
   CheckForSerialProgram();
   
    for(int i = 0; i<3; i++)//for each ball
    {
      if(balls[i].bouncing)
      {
        if(balls[i].waiting > 0)
        {
          balls[i].waiting--;
          leds[balls[i].pos] |=  balls[i].color;
         
          //DEV show positions 
          //p("b");p(i);p(" P="); pl(balls[i].pos);
       
          balls[i].lastFrameTime = millis();//reset compare last so we can start a new bounce 
        }
        else
        {
          balls[i].frameTime = millis();
 
          //Drop science, yo.
          balls[i].velocity += ((gravity * (balls[i].frameTime - balls[i].lastFrameTime))/1000);//apply gravity to the objects velocity
          balls[i].loc = balls[i].loc + balls[i].velocity * (BALLTOP/(stickHeight/1000)); //move location based on current velocity
  
          //check if at/passed the bottom, and reverse direction
          if(balls[i].loc < 0)
          {
            balls[i].loc = 0;//hit the bottom
            balls[i].velocity *= balls[i].friction;//apply impact friction
          }
          balls[i].pos = map(balls[i].loc,1,stickHeight,bottom,BALLTOP-1);//normalize the position
         
 //DEV show positions 
          //p("b");p(i);p(" P="); pl(balls[i].pos);
         
          //update strip by combining colors
          leds[balls[i].pos]  = CombineColors( leds[balls[i].pos], balls[i].color);
          //check if at the bottom itterator
         
          //track if ball is at rest
          if(balls[i].loc == balls[i].lastLoc) {balls[i].lastLocCounter++; } else {balls[i].lastLocCounter = 0;}
         
          //update this location for use in the next frame
          balls[i].lastLoc = balls[i].loc;
         
          //if ball has been at the bottom for 100 frames, change the bouncing state to start rise.
          if(balls[i].lastLocCounter>10)
          {
            balls[i].bouncing = false; //reset
            balls[i].waiting = 80;//wait 80 frames, about 1 second.
          }
         
          //record the frame time, used in next itteration to determin velocity.
          balls[i].lastFrameTime = balls[i].frameTime;
        }
      }
      else //not bouncing anymore, move up and pause
      {
        if(balls[i].waiting > 0)
        {
          balls[i].waiting--;
          //set the ball to be at the bottom position while waiting
          leds[balls[i].pos] |=  balls[i].color;
        }
        else
        {
           if(balls[i].pos >= BALLTOP-1) //are we at the top yet?
           {
             balls[i].pos = BALLTOP-1; //in case we go one over
             balls[i].bouncing = true;
             balls[i].waiting = (20, 600);//how long (frames) to wait at the top of the stick for
             balls[i].friction = random(90, 98);
             balls[i].friction /= -100; //random returns positive int, we require negative float
             //Serial.print(i);Serial.print("f="); Serial.println(balls[i].friction);
             balls[i].loc = stickHeight;//reset location as we forced up via transalted position (pos)
             balls[i].velocity = 0;
           }
           else//not at the top, move ball up
           {
             balls[i].pos++;
             leds[balls[i].pos] |=  balls[i].color;
             balls[i].waiting = balls[i].wait;
           }
        }
      }
    }
    FastLED.show();

    delay(10);
    //after pushing colors to the strip, clear all the balls from the strip ready to draw the next frame
    
    for(int i = 0; i<3; i++) leds[balls[i].pos] = 0;
     
     
     
  }//while(true)
  
 
}

CRGB CombineColors(CRGB one, CRGB two)
{
  CRGB result;
  result.red = one.red | two.red;
  result.green = one.green | two.green;
  result.blue = one.blue | two.blue;
  return result;
}



void InitializeBalls()
{
  pl("InitializeBalls");
  ClearAll();
 
  //delay(50);//helps with frame time calculations
 
  ball one =   {CRGB::Red,stickHeight,0,BALLTOP-1,BALLTOP-1,0,true,6,0  ,-0.93,millis()-20,millis()};
  //delay(50); 
  ball two = { CRGB::Green,stickHeight,0,BALLTOP-1,BALLTOP-1,0,true,6,100,-0.94,millis()-20,millis()};
  //delay(50);
  ball three =  {CRGB::Blue,stickHeight,0,BALLTOP-1,BALLTOP-1,0,true,6,200,-0.95,millis()-20,millis()};
  //delay(50);
 
  balls[0] = one;
  balls[1] = two;
  balls[2] = three;
 
  //PrintBallValues();
  //  delay(50);
 
}
 
void PrintBallValues()
{
  pl("BallValues:");
  for(int i = 0; i<3;i++)
  {
    p("B");pl(i);
    p("Color="); pl(balls[i].color);
    p("loc="); pl(balls[i].loc);
    p("lastLoc="); pl(balls[i].lastLoc);
    p("lastLocCounter="); pl(balls[i].lastLocCounter);
    p("pos="); pl(balls[i].pos);
    p("velocity="); pl(balls[i].velocity);
    p("bouncing="); pl(balls[i].bouncing);
    p("wait="); pl(balls[i].wait);
    p("waiting="); pl(balls[i].waiting);
    p("friction="); pl(balls[i].friction);
    p("lastFrameTime="); pl(balls[i].lastFrameTime);
    p("frameTime="); pl(balls[i].frameTime);
    pl();
  }
}
 
 
