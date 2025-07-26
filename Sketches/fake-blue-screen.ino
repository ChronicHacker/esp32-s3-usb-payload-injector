#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("powershell");
  delay(1000);
  Keyboard.println("cls; Write-Host 'A problem has been detected and Windows has been shut down...' -ForegroundColor Blue; pause");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
