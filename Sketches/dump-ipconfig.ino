#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("powershell -WindowStyle Hidden");
  delay(1000);
  Keyboard.println("ipconfig /all > $env:USERPROFILE\Desktop\networkinfo.txt");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
