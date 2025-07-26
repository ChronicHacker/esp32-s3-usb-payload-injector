#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("calc");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
