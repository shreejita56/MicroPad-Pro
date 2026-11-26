#include <HID-Project.h>

const uint8_t colPins[3] = {2,3,4};
const uint8_t rowPins[3] = {5,6,7};

const uint8_t volumeA = 1;
const uint8_t volumeB = 0;

const uint8_t brigtnessA = 14;
const uint8_t brigtnessB = 15;

const uint8_t scrollA = 16;
const uint8_t brigtnessB = 13;

const uint16_t HID_VOLUME_INCREMENT    = 0x00E9;
const uint16_t HID_VOlUME_DECREMENT = 0x00EA;
const uint16_t HID_BRIGHTNESS_INCREMENT = 0x006F;
const uint16_t HID_BRIGHTNESS_DECREMENT = 0x0070;

const uint8_t keyForPosition[9] = {'a','b','c','d','e','f','g','h','i'};

const unsigned long debounce = 18;
bool KeyStable[9] = {false};
bool KeyRawPrevious[9] = {false};
unsigned long KeyChanged[9] = {0};

struct Encoder 
{
  uint8_t pinA;
  uint8_t pinB;
  uint8_t previousState;
  int8_t quarterSteps;
}

Encoder volumeEncoder = {volumeA , volumeB,0,0};
Encoder brighnessEncoder = {brightA ,brightB , 0 ,0};
Encoder scrollEncoder = {scrollA,scrollB,0,0};

const int8_t encoderTable[16] = {

    0,-1,1,0,
    1,0,0,-1,
    -1,0,0,1,
    0,1,-1,0
};

uint8_t readEncoderstate(const Encoder &enc)
{return (digitalRead(enc.pinA)<< 1) | digitalRead(enc.pinB);}

void beginEncoder (Encoder &enc)
{
pinMode(enc.pinA , Input_PULLUP);
pinMode(enc.pinB , Input_PULLUP);
enc.previousState = readEncoderState(enc);
}

int8_t updateEncoder(Encoder &enc)
{

  int8_t current = readEncoderState(enc);  
  int8_t index = (enc.previousState << 2 | current);
  enc.quarterStep += encoderTable[index];
  enc.previousState = current;

  if(enc.quarterStep >= 4)
  {enc.quarterStep = 0;
    return 1;
  }
  if(enc.quarterStep <= -4)
  {enc.quarterStep = 0;
    return -1;
  }
  return 0;

}

void scanKeys()
{

for(uint8_t r = 0; r<3 ;r++)
{
  digitalWrite(rowPins[r], HIGH);
}

for(uint8_t r = 0 ; r<3 ; r++)
{
   digitalWrite(rowPins[r], LOW);
   delayMicroseconds(80);

   for (uint8_t c = 0; c<3 ;c++)
   {
    uint8_t index =  r * 3 + c;
    bool pressed = (digitalRead(colPins[c]) == LOW);

    if(pressed != KeyRawPrevious[index])
    {
     KeyRawPrevious[index] = pressed;
     KeyChangedAt[index] = millis();

    }

    if((millis() - KeyChangedAt[index]) > debounce && pressed != KeyStable[index])
    {
        KeyStable[index] = pressed;

        if(pressed)
        {
            BootKeyboard.press(keyForPosition[index]);
        }else
        {
            BootKeyboard.release(keyForPosition[index]);
        }
    }

   }


   digitalWrite(rowPins[r],HIGH);
}
}


void setup()
{
  for (uint8_t c = 0; c <3 ; c++)
  {
    pinMode(colPins[c], INPUT_PULLUP);
  }
  for(uint8_t r = 0 ; r<3 ; r++)
  {
    pinMode(rowPins[r],OUTPUT);
    digitalWrite(rowPins[r], HIGH);
  }

  beginEncoder(volumeEncoder);
  beginEncoder(brightnessEncoder);
  beginEncoder(scrollEncoder);

  BootKeyboard.begin();
  Consumer.begin();
  Mouse.begin();
}

void loop()
{
  scanKeys();

  int8_t volumeStep = updateEncoder(volumeEncoder);
  if(volumeStep > 0)
  {Consumer.write(HID_VOLUME_INCREMENT);}
  else if (volumeStep < 0)
  {Consumer.write(HID_VOlUME_DECREMENT);}

  int8_t brightnessStep = updateEncoder(brightnessEncoder);
  if( brighttnessStep > 0)
  {
    Consumer.write(HID_BRIGHTNESS_DECREMENT);
  }
  int8_t scrollStep = updateEncoder(scrollEncoder);
  if (scrollStep != 0) {
    // Positive wheel value scrolls up; negative scrolls down.
    Mouse.move(0, 0, scrollStep * 2);
  }


}
