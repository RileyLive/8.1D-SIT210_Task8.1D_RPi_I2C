#include <Wire.h>
#include <stdlib.h>


void setup() {
  Wire.begin(8);
  Wire.onRequest(requestEvent);
}

void loop() {
  delay(200);
}

void requestEvent() {
  Wire.write("too dark");
}
