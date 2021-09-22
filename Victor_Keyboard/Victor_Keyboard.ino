#include <PS2KeyRaw.h>
#include "Scancodes.h"

#define KBACK     2
#define KBRDY     4
#define KBDATA    5
#define PS2_CLK   3
#define PS2_DATA  6


PS2KeyRaw keyboard;

void SendStop()
{
  digitalWrite(KBDATA, LOW);
  digitalWrite(KBRDY, LOW);
  while(digitalRead(KBACK));
  digitalWrite(KBDATA, HIGH);
  digitalWrite(KBRDY, HIGH);
  delay(1);
  while(!digitalRead(KBACK));
}

void SendBit(byte value)
{
  digitalWrite(KBDATA, value);
  digitalWrite(KBRDY, LOW);
  while(digitalRead(KBACK));
  delayMicroseconds(400);
  digitalWrite(KBRDY, HIGH);
  while(!digitalRead(KBACK));
  delayMicroseconds(400);
}

void SendKey(byte keycode, byte make)
{
  // write keycode
  for(byte i=0; i<7; i++)
  {
      SendBit(bitRead(keycode, i));
  }
  // write key closed
  SendBit(make);
  // write stop
  SendStop();
}

void setup() {
  delay(500);
  pinMode(KBACK, INPUT_PULLUP);
  pinMode(KBRDY, OUTPUT);
  pinMode(KBDATA, OUTPUT);
  digitalWrite(KBRDY, HIGH);

  keyboard.begin(PS2_DATA, PS2_CLK);
  Serial.begin(9600);

  SendKey(0, 0);
  delay(400);
}

void loop() {
  static byte make = 1;
  static bool extended = false;
  
  if(keyboard.available())
  {
    byte c = keyboard.read();
    Serial.print(c, HEX);
    Serial.print(" ");

    if(c == 0xF0)
    {
      make = 0;
    }
    else if(c == 0xE0)
    {
      extended = true;
    }
    else if(c == 0x00)  // ignore dummy
    {
      Serial.println();
    }
    else
    {
      Serial.print("Send ");
      
      if(extended)
      {
        Serial.print(PS2_Victor_extended[c], HEX);
        SendKey(PS2_Victor_extended[c], make);
        extended = false;
      }
      else
      {
        Serial.print(PS2_Victor[c], HEX);
        SendKey(PS2_Victor[c], make);
      }
      
      Serial.println(make);

      if(!make)
      {
        make = 1;
      }
    }
  }
}
