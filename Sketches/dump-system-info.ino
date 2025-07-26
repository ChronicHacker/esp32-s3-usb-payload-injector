#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("powershell -WindowStyle Hidden");
  delay(1000);
  Keyboard.println("systeminfo > $env:USERPROFILE\Desktop\systeminfo.txt");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
