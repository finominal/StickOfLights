
void Fire()
{
  Serial.println("Fire!!");
  while(program == 6)
  {
    for(int i = 0; i<numberOfFrames && program == 6;i++)//for each frame
    {
  
      for(int j = 0; j<LEDCOUNT; j++)//for each eld in the frame
      {
          leds[j] = Color(fireFrames[i][j*3],fireFrames[i][j*3+1],fireFrames[i][j*3+2]);
         // leds[11-j] = Color(fireFrames[i][j*3],fireFrames[i][j*3+1],fireFrames[i][j*3+2]);
      }
      FastLED.show();
      Serial.println("FireFrame");
      delay(39);
      CheckForSerialProgram();
    }
  }
}
