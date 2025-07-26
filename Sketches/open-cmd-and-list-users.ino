#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("cmd");
  delay(1000);
  Keyboard.println("net user");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
