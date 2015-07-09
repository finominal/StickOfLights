
void Fire()
{
  while(program == 8)
  {
    
    for(int i = 0; i<numberOfFrames && program == 8;i++)//for each frame
    {
      for(int j = 0; j<LEDCOUNT; j++)//for each eld in the frame
      {
          leds[j] = Color(fireFrames[i][j*3],fireFrames[i][j*3+1],fireFrames[i][j*3+2]);
          leds[11-j] = Color(fireFrames[i][j*3],fireFrames[i][j*3+1],fireFrames[i][j*3+2]);
      }
      FastLED.show();
     
      delay(30);
      CheckForSerialProgram();
    }
  }
}
