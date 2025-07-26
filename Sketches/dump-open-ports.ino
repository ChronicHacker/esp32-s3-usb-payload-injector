#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("powershell -WindowStyle Hidden");
  delay(1000);
  Keyboard.println("Get-NetTCPConnection | Where-Object { $_.State -eq 'Listen' } > $env:USERPROFILE\Desktop\open-ports.txt");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
