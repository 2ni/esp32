#include <Arduino.h>
#include "base_functions.h"

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW); // turn off LED
  blink();

  Serial.begin(115200);
  Serial.setTimeout(2000);
  while(!Serial) { }

  DL("Starting setup");

  connect_to_wifi();
}

void loop() {
  DL("Loop");
  int now = millis();
  while (millis()-now < 1000) {
    ; // do nothing
  }
}

