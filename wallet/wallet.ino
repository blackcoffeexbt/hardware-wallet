/**
   Very cheap little bitcoin HWW for use with lilygo TDisplay
   although with little tinkering any ESP32 will work

   Join us!
   https://t.me/lnbits
   https://t.me/makerbits

*/

#include <FS.h>
#include <SPIFFS.h>

#include <Wire.h>
#include <TFT_eSPI.h>
#include <Hash.h>
#include <ArduinoJson.h>
#include "Bitcoin.h"
#include "PSBT.h"

#include <FS.h>
#include <SPIFFS.h>
fs::SPIFFSFS &FlashFS = SPIFFS;


SHA256 h;
TFT_eSPI tft = TFT_eSPI();

struct FileData {
  bool success;
  String data;
};

struct Command {
  String cmd;
  String data;
};

void fixArduinoIdeBug() {
  // do not remove
  // this function definition is require after FileData declaration
}