# ESP32-S3 USB Payload Injector

A collection of 20 standalone Arduino `.ino` payloads designed for the ESP32-S3, turning your microcontroller into a powerful USB prank or automation tool. Inject PowerShell commands, play sounds, open websites, and dump system data with ease.

---

## 🔥 Features

- Plug-and-play `.ino` payloads — no `.h` files required
- USB HID injection for Windows systems
- Includes pranks, info dumps, PowerShell tricks, and TTS
- Built specifically for ESP32-S3 with native USB + TinyUSB support

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
- `fake-blue-screen.ino` – Simulates a BSOD with blue text
- `open-run-dialog.ino` – Opens the Run window
- `fake-shutdown.ino` – Runs `shutdown /s /t 60`
- `reverse-text-prank.ino` – Types reversed text into Notepad
- `list-startup-items.ino` – Dumps startup items to Desktop
- `dump-wifi-passwords.ino` – Dumps saved SSIDs & passwords to Desktop
- `dump-system-info.ino` – Dumps system info to Desktop
- `dump-ipconfig.ino` – Dumps network info to Desktop
- `dump-open-ports.ino` – Dumps open TCP ports to Desktop

---

## 🛠 Requirements

- ESP32-S3 development board (with native USB support)
- Arduino IDE 2.x or newer
- USB data cable (not just power)
- Windows PC for testing

---

## 🚀 How to Use

### 1️⃣ Install ESP32 Board Support

1. Open **Arduino IDE**
2. Go to **File > Preferences**
3. In “Additional Board Manager URLs”, add: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
4. Then go to **Tools > Board > Board Manager**
5. Search for `esp32` and install the latest package by **Espressif Systems**

---

### 2️⃣ Select Correct Board & Enable TinyUSB

In **Tools**, set the following:

| Setting                  | Value                          |
|--------------------------|--------------------------------|
| **Board**                | ESP32S3 Dev Module             |
| USB CDC On Boot          | Enabled                        |
| USB Mode                 | Hardware CDC and HID           |
| USB Firmware MSC         | Disabled                       |
| USB Stack                | TinyUSB                        |
| Flash Size               | 8MB (or match your board)      |
| Flash Mode               | QIO                            |
| Flash Frequency          | 80MHz                          |
| PSRAM                    | OPI PSRAM                      |
| Upload Speed             | 921600 (or 460800 if needed)   |
| Port                     | Select your ESP32-S3 port      |

✅ `USB Mode` and `USB Stack = TinyUSB` are critical for HID injection.

---

### 3️⃣ Upload a Payload

1. Open any `.ino` file from the repo
2. Connect your ESP32-S3 to your PC with a data USB cable
3. Select the correct port under **Tools > Port**
4. Click **Upload**
5. Once uploaded, unplug and replug the board into a Windows machine — the payload will auto-execute

> ⚠️ Only one `.ino` payload can be active at a time. Upload a different file to change payloads.

---

## ⚠️ Ethical Use

These scripts are for **educational and ethical hacking purposes only**.

**Do NOT** use them on any device without explicit permission.  
Use responsibly, and never for malicious activity.

> 💡 Smart hackers get consent. Dumb ones get caught.

---

## 📜 License

MIT License  
Use, modify, remix — just credit the author.

Created with 🤘 by [Chr0nicHacker](https://github.com/Chr0nicHacker)  
🌐 https://www.chronichacker.com

> 💬 Break. Build. Blaze New Trails.
