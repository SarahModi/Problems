# 🔐 Keylogger PoC - Educational Implementation

> **Educational Purpose Only**: This tool demonstrates how keylogging works. Unauthorized keylogging is illegal. See [ETHICS.md](./ETHICS.md).

---

## 📌 What This Does

This is an **educational proof-of-concept** that demonstrates keystroke logging and monitoring. It:

- 📝 Logs every keystroke to a JSON file with timestamps
- 🪟 Tracks which window/application is active (context awareness)
- 🔒 Stores logs **locally only** (no internet transmission)
- ⛔ Requires explicit user consent before starting
- 📊 Provides statistics on total keys logged

### Real-World Application

Understanding how keyloggers work is essential for:
- **Defensive security**: Recognizing keylogger threats
- **System hardening**: Preventing keylogger installation
- **Incident response**: Detecting unauthorized keylogging
- **Security awareness**: Teaching users about credentials theft

---

## ⚠️ Critical: Legal & Ethical Use

**You MUST read [ETHICS.md](./ETHICS.md) before using this tool.**

### What's Legal ✅
- Running on your own computer
- Testing on systems with explicit written permission
- Educational labs under supervision
- Your own authorized test environment

### What's Illegal ❌
- Keylogging anyone without consent
- Stealing credentials or data
- Unauthorized system access
- Deploying on other people's devices

**Penalties for misuse**: Federal charges, 10-20 years prison, $100K+ fines.

---

## 🚀 Setup

### Requirements
- Python 3.9 or higher
- Windows, macOS, or Linux
- Administrator/root access (may be required)

### Installation

```bash
# 1. Create virtual environment (recommended)
python -m venv venv
source venv/bin/activate  # On Windows: venv\Scripts\activate

# 2. Install dependencies
pip install -r requirements.txt
```

### Dependencies
- `pynput` - Cross-platform keyboard/mouse monitoring
- `requests` - HTTP library (for future email notifications)
- `python-dotenv` - Environment variable management

---

## 💻 Running the Tool

```bash
# Start the keylogger
python main.py
```

### What Happens

1. **Legal disclaimer appears** - You must confirm you understand the legal implications
2. **Explicit consent required** - Type `YES I UNDERSTAND` to proceed
3. **Logging begins** - Keystrokes are logged to `./logs/` directory
4. **Window tracking** - Active application title is recorded with each keystroke
5. **Stop with ESC** - Press ESC key to stop logging and see statistics

### Example Session

```
======================================================================
⚠️  EDUCATIONAL KEYLOGGER PoC - READ CAREFULLY
======================================================================

🚨 LEGAL WARNING:
──────────────────────────────────────────────────────────────────────
Unauthorized keylogging is ILLEGAL under:
  • Computer Fraud and Abuse Act (CFAA) - USA
  • Electronic Communications Privacy Act (ECPA) - USA
  • Computer Misuse Act - UK & similar laws worldwide
  • Penalties: Federal charges, 10-20 years prison, $100K+ fines
──────────────────────────────────────────────────────────────────────

✅ LEGAL USES (Only these):
  • Your own computer (learning purposes)
  • Authorized security testing with written permission
  • Corporate/school security labs
  • Academic research under supervision

[... more warnings ...]

⚠️  I understand the legal implications and will only use this on AUTHORIZED systems.
   Type 'YES I UNDERSTAND' to continue: YES I UNDERSTAND

✅ Starting keylogger. Press ESC to stop.

📝 Logging to: ./logs/keylog_20240510_143022.json
🪟 Window tracking: Google Chrome

Keys are being logged. Press ESC to stop.

[14:30:45] Logged 50 keys | Window: Google Chrome
[14:31:12] Logged 100 keys | Window: Visual Studio Code
[14:31:45] Logged 150 keys | Window: Terminal

^C
======================================================================
✅ Keylogger stopped.
📊 Statistics:
   Total keys logged: 247
   Log file: ./logs/keylog_20240510_143022.json
   Window log: ./logs/windows_20240510_143022.json
======================================================================
```

---

## 📊 Output Files

### keylog_YYYYMMDD_HHMMSS.json

Each keystroke is logged as a JSON object:

```json
{
  "timestamp": "2024-05-10T14:30:45.123456",
  "key": "a",
  "type": "character",
  "window": "Google Chrome",
  "purpose": "educational_monitoring"
}
```

Sensitive keys logged:
```json
{
  "timestamp": "2024-05-10T14:30:50.654321",
  "key": "Key.enter",
  "type": "special",
  "window": "Google Chrome",
  "purpose": "educational_monitoring"
}
```

### Reading the Logs

```python
import json

with open('logs/keylog_20240510_143022.json', 'r') as f:
    for line in f:
        entry = json.loads(line)
        print(f"[{entry['timestamp']}] {entry['key']} in {entry['window']}")
```

---

## 🔍 What I Learned

### Technical Insights
1. **Input Monitoring at OS Level**
   - `pynput` uses OS-level keyboard hooks
   - Works across all applications
   - Requires elevated privileges on some systems

2. **Window Context Awareness**
   - Can correlate keystrokes with active applications
   - Useful for threat detection
   - `win32gui` on Windows, XDotool on Linux

3. **Structured Logging**
   - JSON format for easy analysis
   - Timestamps for correlation
   - Context (window) for understanding what was typed where

4. **User Awareness**
   - Most keyloggers run silently (malicious)
   - Educational version requires explicit consent
   - Transparency = ethical security research

### Security Implications
- **Threat**: Credentials are easily captured
- **Defense**: Monitor running processes, disable suspicious software, use password managers
- **Detection**: Look for `pynput` or similar libraries in running processes
- **Mitigation**: Use 2FA, biometric authentication, hardware security keys

### Real-World Parallels
- **Spyware/Trojans**: Capture banking credentials
- **Insider threats**: Employees logged everything they typed
- **Ransomware**: Initial access through keylogged credentials
- **APT campaigns**: Keyloggers as persistence mechanism

---

## 🛡️ Defense Against Keyloggers

After building this PoC, here's how to **defend** against real keyloggers:

1. **Process Monitoring**
   - Watch for suspicious python processes
   - Monitor for `pynput`, `pyautogui`, similar libraries

2. **Software Security**
   - Keep antivirus updated
   - Don't run untrusted scripts
   - Use application whitelisting

3. **Behavioral Detection**
   - Monitor keyboard input hook registrations
   - Watch for keyboard driver modifications
   - Detect unauthorized system calls

4. **User Security**
   - Use password managers (don't type passwords)
   - Enable 2FA (credentials alone aren't enough)
   - Use hardware security keys
   - Monitor for unusual account activity

---

## 📚 Resources

### Academic & Technical
- [OWASP: Input Validation Cheat Sheet](https://cheatsheetseries.owasp.org/cheatsheets/Input_Validation_Cheat_Sheet.html)
- [Keylogger Detection & Prevention](https://www.sans.org/white-papers/)
- [pynput Documentation](https://pynput.readthedocs.io/)

### Legal References
- [18 U.S.C. § 1029 - CFAA Text](https://www.law.cornell.edu/uscode/text/18/1030)
- [ECPA: 18 U.S.C. § 2511](https://www.law.cornell.edu/uscode/text/18/2511)
- [Computer Misuse Act 1990 (UK)](https://www.legislation.gov.uk/ukpga/1990/18)

### Detection Tools
- [OSQuery](https://osquery.io/) - Monitor running processes
- [Sysmon](https://docs.microsoft.com/en-us/sysinternals/downloads/sysmon) - System activity monitoring
- [YARA](https://virustotal.github.io/yara/) - Pattern matching for malware

---

## 🔗 Related Projects

- **[02-Phishing-Simulator](../02-phishing-simulator/)** - Related: Social engineering awareness
- **[03-Firewall-Tester](../03-firewall-tester/)** - Related: Network security testing
- **[04-Alert-Bot](../04-alert-bot/)** - Related: Notification systems

---

## 📝 License

MIT License - See LICENSE file

---

## ⚖️ Disclaimer

**This tool is for educational purposes only.** The author assumes no liability for misuse, unauthorized access, or any damage caused by this software.

By using this tool, you agree that:
- You will only use it on authorized systems
- You understand the legal implications
- You take full responsibility for your actions
- The author is not liable for misuse

See [ETHICS.md](./ETHICS.md) for complete legal information.

---

**Created by:** Sarah Modi 
**Date:** 2024-05-10  
**For:** Security Research & Education  
**Status:** Active Development
