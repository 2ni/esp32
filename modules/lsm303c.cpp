/*
 * based on http://blog.solutions-cubed.com/lsm303-compass-tilt-compensation/
 * see App note: https://www.st.com/content/ccc/resource/technical/document/application_note/e6/f0/fa/af/94/5e/43/de/CD00269797.pdf/files/CD00269797.pdf/jcr:content/translations/en.CD00269797.pdf
 */
#include <LSM303C.h>

#include "base_functions.h"

#define SDA 21
#define SCL 22

LSM303C lsm303(SDA, SCL);

void setup(void) {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW); // turn off LED
  blink();

  Serial.begin(115200);
  Serial.setTimeout(2000);
  while (!Serial) { }

  if(!lsm303.begin()) {
    while(1);
  }

  /*
  DF("calibration: %f\n", lsm303.calibrate_acc());
  lsm303.calibrate_mag();
  */
  lsm303.set_mag_min_max({-998, -800, -1374}, {589, 810, 345});
}

void loop() {
  double heading_lib = lsm303.get_heading();

  DF("heading: %.0f°\n", heading_lib);

  long now = millis();
  while (millis() - now < 1000) {
    ; // do nothing
  }
}

