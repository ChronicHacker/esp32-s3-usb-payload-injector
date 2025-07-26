#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(200);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("powershell");
  delay(1000);
  Keyboard.println("Start-Process 'https://www.youtube.com/watch?v=dQw4w9WgXcQ&autoplay=1'");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
