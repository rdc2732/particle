/*
 * Project hello
 * Description:
 * Author:
 * Date:
 */

int led = D7;

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  Particle.publish("hello", "world");

  pinMode(led, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

  digitalWrite(led, HIGH);
  delay(100);

  digitalWrite(led, LOW);
  delay(1200);
  

}