#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("rundll32.exe user32.dll,LockWorkStation");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
