/*
int dotLen = 1;     // length of the morse code 'dot'
int dashLen = 2;    // length of the morse code 'dash'
int elemPause = 1;  // length of the pause between elements of a character
int Spaces = 4;     // length of the spaces between characters
int wordPause = 7;  // length of the pause between words

char[] morsePhrase= "claire bear";
int morsePhraseLength = 0; //this must match the length of morseToPlay
int morseIndex = 0; 



void DoMorse()
{

}

void MorseDot()
{
  
}

// DASH
void MorseDash()
{
  FastLED.setLed(LEDCOUNT-1,CRGB::HotPink);  	// turn the LED on 
  morsecountdown = dashLen;
}


void MorseChar(char tmpChar)
{
	// Take the passed character and use a switch case to find the morse code for that character
	switch (tmpChar) {
	  case 'a':	
		MorseDot();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		break;
	  case 'b':
		MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		break;
	  case 'c':
	    MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		break;
	  case 'd':
		MorseDash();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		break;
	  case 'e':
		MorseDot();
		LightsOff(elemPause);
		break;
	  case 'f':
	    MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		break;
	  case 'g':
		MorseDash();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		break;
	  case 'h':
	    MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		break;
	  case 'i':
	    MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		break;
	  case 'j':
	    MorseDot();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		break;
      case 'k':
	    MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		break;
	  case 'l':
	    MorseDot();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		break;
      case 'm':
	    MorseDash();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		break;
	  case 'n':
	    MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		break;
	  case 'o':
	    MorseDash();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		break;
	  case 'p':
	    MorseDot();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		break;
	  case 'q':
	    MorseDash();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		break;
	  case 'r':
	    MorseDot();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		break;
	  case 's':
	    MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		break;
	  case 't':
	    MorseDash();
		LightsOff(elemPause);
		break;
	  case 'u':
	    MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		break;
	  case 'v':
	    MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		break;
	  case 'w':
	    MorseDot();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		break;
	  case 'x':
	    MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		break;
	  case 'y':
	    MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		break;
	  case 'z':
	    MorseDash();
		LightsOff(elemPause);
		MorseDash();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		MorseDot();
		LightsOff(elemPause);
		break;
	  default: 
		// If a matching character was not found it will default to a blank space
		LightsOff(Spaces);			
	}
}
*/
