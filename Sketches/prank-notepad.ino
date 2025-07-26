#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("notepad.exe");
  delay(1000);
  Keyboard.println("You've been hacked by Chr0nicHacker!");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
