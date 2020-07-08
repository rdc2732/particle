/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Rick/Documents/dev/particle/hello/src/hello.ino"
/*
 * Project hello
 * Description:
 * Author:
 * Date:
 */

void setup();
void loop();
#line 8 "c:/Users/Rick/Documents/dev/particle/hello/src/hello.ino"
int led = D7;

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  Particle.publish("Testing", "Hi Elijah");

  pinMode(led, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

  digitalWrite(led, HIGH);
  delay(100);

  digitalWrite(led, LOW);
  delay(100);

  digitalWrite(led, HIGH);
  delay(100);

  digitalWrite(led, LOW);
  delay(100);

  digitalWrite(led, HIGH);
  delay(100);

  digitalWrite(led, LOW);
  delay(1200);
  
}