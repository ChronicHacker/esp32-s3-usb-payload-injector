#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("notepad");
  delay(1000);
  Keyboard.println([string]::Join('', 'You have been reversed!'[:: -1]));
  Keyboard.end();
}

void loop() {
  // Do nothing
}
