#include "Arduino.h"

#define BUILT_IN_LED 2    //Onboard LED is connected to PIN D4
#define PHYSICAL_LED 4    //GPIO4 is PIN D2
#define DT 700            //Milliseconds

void setup() {
  pinMode(BUILT_IN_LED, OUTPUT);
  pinMode(PHYSICAL_LED, OUTPUT);
}

void loop() {
  //Switch on built in LED (built in LED is inverted) and switch off physical led
  digitalWrite(BUILT_IN_LED, LOW);
  digitalWrite(PHYSICAL_LED, LOW);
  delay(DT);

  //Switch off built in LED and switch on physical led
  digitalWrite(BUILT_IN_LED, HIGH);
  digitalWrite(PHYSICAL_LED, HIGH);
  delay(DT);
}
