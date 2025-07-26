#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("powershell -WindowStyle Hidden");
  delay(1000);
  Keyboard.println("[System.Windows.Forms.MessageBox]::Show('System Error: Code Red','FATAL ERROR')");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
