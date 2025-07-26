#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();
  delay(500);

  Keyboard.println("powershell -WindowStyle Hidden");
  delay(1000);
  Keyboard.println("Add-Type -AssemblyName System.speech; (New-Object System.Speech.Synthesis.SpeechSynthesizer).Speak('Hack the planet!')");
  Keyboard.end();
}

void loop() {
  // Do nothing
}
