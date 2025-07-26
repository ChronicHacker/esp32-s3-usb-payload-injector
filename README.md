# ESP32-S3 USB Payload Injector

A collection of 19 standalone Arduino `.ino` payloads designed for the ESP32-S3, turning your microcontroller into a powerful USB prank or automation tool. Inject PowerShell commands, play sounds, open websites, and dump sensitive system data with ease.

---

## 🔥 Features

- Plug-and-play `.ino` payloads (no extra libraries required beyond `Keyboard`)
- USB HID injection compatible with Windows
- Includes PowerShell pranks, audio, system info dumps, and more
- Built for ESP32-S3 with native USB support

---

## 📁 Included Payloads

- `rickroll-youtube.ino` – Opens YouTube and auto-plays Rickroll
- `fake-virus-popup.ino` – Displays a fake virus warning
- `prank-notepad.ino` – Opens Notepad and types a funny message
- `speak-warning.ino` – Uses TTS to say a warning message
- `play-system-sound.ino` – Plays a system alert sound
- `disable-task-manager.ino` – Disables Task Manager via registry
- `open-cmd-and-list-users.ino` – Opens CMD and lists user accounts
- `lock-computer.ino` – Locks the machine
- `open-calculator.ino` – Opens Calculator
- `run-taskmgr.ino` – Opens Task Manager
- `speak-funny-quote.ino` – Speaks “Hack the planet!”
- `fake-blue-screen.ino` – Fakes a blue screen with blue text
- `open-run-dialog.ino` – Opens the Run window
- `fake-shutdown.ino` – Runs `shutdown /s /t 60`
- `reverse-text-prank.ino` – Writes reversed text in Notepad
- `list-startup-items.ino` – Dumps startup items to Desktop
- `dump-wifi-passwords.ino` – Dumps saved Wi-Fi SSIDs & passwords to Desktop
- `dump-system-info.ino` – Dumps system info to Desktop
- `dump-ipconfig.ino` – Dumps network info to Desktop
- `dump-open-ports.ino` – Dumps open TCP ports to Desktop

---

## 🛠 Requirements

- ESP32-S3 dev board (with native USB)
- Arduino IDE with ESP32 board support
- USB cable for programming

---

## 🚀 How to Use

1. Open Arduino IDE.
2. Go to **Tools > Board > ESP32 Arduino > ESP32S3 Dev Module**.
3. Select the appropriate COM port under **Tools > Port**.
4. Open any `.ino` file from this project folder.
5. Click **Upload**.
6. Plug the board into a Windows machine — the payload executes automatically.

> ⚠️ Only one payload can run at a time. To use a different one, re-upload the new `.ino`.

---

## ⚠️ Ethical Use

These payloads are for **educational and ethical purposes** only.  
Get permission before using this on any device that isn't yours.

> This is a learning tool — not a hacking tool. Be a smart hacker, not a dumb one.

---

## 📜 License

MIT License  
Use freely, modify proudly, credit respectfully.

Built with pride by [Chr0nicHacker]
🌐 https://www.chronichacker.com

> 💬 Break. Build. Blaze New Trails.
