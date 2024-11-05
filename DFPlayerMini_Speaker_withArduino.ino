#include "SoftwareSerial.h";
#include "DFRobotDFPlayerMini.h"

static const uint8_t PIN_MP3_TX = 10;
static const uint8_t PIN_MP3_RX = 11;
SoftwareSerial softwareSerial(PIN_MP3_TX, PIN_MP3_RX);

DFRobotDFPlayerMini player;

void setup() {
Serial.begin(9600);
softwareSerial.begin(9600);

if (player.begin(softwareSerial)) {
    Serial.println("OK");

    player.volume(40);
    player.play(1);
  } else{
    Serial.println("Connecting to DFPlayer mini failed!");
  }
}

void loop() {
}
