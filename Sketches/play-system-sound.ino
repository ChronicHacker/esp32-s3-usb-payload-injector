#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("powershell -WindowStyle Hidden");
  delay(1000);
  Keyboard.println("(New-Object Media.SoundPlayer 'C:\\Windows\\Media\\Windows Exclamation.wav').PlaySync()");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
