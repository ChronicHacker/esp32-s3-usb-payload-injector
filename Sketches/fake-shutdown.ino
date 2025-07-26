#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("shutdown /s /t 60");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
