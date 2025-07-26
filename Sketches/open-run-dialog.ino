#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(200);
  Keyboard.releaseAll();
  Keyboard.end();
}

void loop() {
  // Do nothing
}
