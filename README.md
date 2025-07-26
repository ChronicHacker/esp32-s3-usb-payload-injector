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
- Arduino IDE with ESP32 board support installed
- USB cable that supports data (not just charging)

---

## 🚀 How to Use

### Step-by-Step Setup

1. Open **Arduino IDE**.
2. Install ESP32 support:
   - Go to **File > Preferences**.
   - In **Additional Board Manager URLs**, add:

     ```
     https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
     ```

   - Then go to **Tools > Board > Board Manager**, search for **esp32**, and install it.

3. Select your board:  
   Go to **Tools > Board > ESP32 Arduino > ESP32S3 Dev Module**

4. Configure these settings under **Tools**:

| Setting               | Value                        |
|-----------------------|------------------------------|
| USB CDC On Boot       | Enabled                      |
| USB Mode              | HID                          |
| USB Firmware MSC      | Disabled                     |
| Flash Size            | 8MB (or match your board)    |
| Flash Mode            | QIO                          |
| Flash Frequency       | 80MHz                        |
| PSRAM                 | OPI PSRAM                    |
| Upload Speed          | 921600 (or 460800 if needed) |
| Port                  | Select your ESP32-S3 port    |

5. Open any `.ino` file from this repo.
6. Click **Upload**.
7. Plug the board into a Windows machine. The payload will execute automatically.

> ⚠️ Only one `.ino` can be active at a time. To switch payloads, upload a different sketch.

---

## ⚠️ Ethical Use

These payloads are for **educational and ethical purposes only**.  
Never run them on a system you do not have permission to test.

> 🎓 Learn responsibly. Hack ethically. Never be *that* guy.

---

## 📜 License

**MIT License**  
Use freely, modify proudly, credit respectfully.

Built with pride by [Chr0nicHacker](https://github.com/Chr0nicHacker)  
🌐 https://www.chronichacker.com

> 💬 Break. Build. Blaze New Trails.
