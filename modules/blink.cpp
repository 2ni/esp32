/**
 * Simple blinking
 */

#include <Arduino.h>

#define DEBUG

#ifdef DEBUG
  #define D(x) Serial.print(x)
  #define DL(x) Serial.println(x)
#else
  #define D(x)
  #define DL(x)
#endif

#define LED 5

void setup() {
  //WiFi.mode(WIFI_OFF);

  pinMode(LED, OUTPUT);

  // uart
  Serial.begin(115200);
  Serial.setTimeout(2000);
  while(!Serial) { }
}

void loop() {
  DL("LED off");
  digitalWrite(LED, LOW); // turn LED on
  delay(500);
  DL("LED on");
  digitalWrite(LED, HIGH);
  delay(500);
}


