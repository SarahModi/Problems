# 📝 Keylogger PoC - Learning Notes

## Project Overview
**Name**: Educational Keylogger PoC  
**Started**: 2024-05-10  
**Goal**: Understand keystroke monitoring and create security awareness PoC  
**Status**: In Progress

---

## 📚 What I Learned

### Day 1: Setup & Fundamentals
- [ ] Installed `pynput` library
- [ ] Understood keyboard hooks vs polling
- [ ] Learned about OS-level input monitoring
- [ ] Discovered window tracking on Windows

**Key Insights:**
- `pynput` uses low-level OS keyboard hooks (not polling)
- This means it can see keystrokes even from other applications
- Window context is crucial for understanding what was being typed

**Challenges:**
- Import errors on first install (pip vs python3)
- Need administrative rights on some systems
- Platform differences (Windows vs Linux vs Mac)

**Next Steps:**
- Get window tracking working on my OS
- Implement JSON logging
- Add timestamp functionality

---

## 🔧 Technical Implementation

### Keystroke Logging
```python
from pynput import keyboard

def on_press(key):
    # Handle keyboard input
    try:
        char = key.char  # Regular character
    except AttributeError:
        char = str(key)  # Special key (Shift, Ctrl, etc)
```

**How it works:**
1. `pynput.keyboard.Listener()` registers OS-level keyboard hook
2. Every keystroke triggers `on_press()` callback
3. We capture the key and log it to JSON
4. `on_release()` allows clean exit (ESC key stops)

### Window Tracking (Windows)
```python
import win32gui

def get_active_window():
    window = win32gui.GetForegroundWindow()
    title = win32gui.GetWindowText(window)
    return title
```

**Why this matters:**
- Correlates keystrokes with application
- Shows which application was in focus
- Useful for understanding the context

### JSON Logging
```python
import json
from datetime import datetime

log_entry = {
    "timestamp": datetime.now().isoformat(),
    "key": char,
    "type": key_type,
    "window": window_title
}

with open(LOG_FILE, "a") as f:
    json.dump(log_entry, f)
    f.write("\n")
```

**Advantages:**
- Structured data format
- Easy to parse and analyze
- Timestamps for correlation
- Context awareness

---

## 🚨 Legal & Ethical Implementation

### What Makes This Educational (Not Malicious)

1. **Explicit Consent Required**
   - Prompts user before starting
   - Requires typing "YES I UNDERSTAND"
   - Prevents accidental misuse

2. **Local Logging Only**
   - No internet transmission
   - No external data exfiltration
   - Logs stored in obvious `./logs/` directory

3. **Transparent & Visible**
   - Doesn't hide itself
   - Prints to console while running
   - Clear legal disclaimer

4. **Easy to Stop**
   - Press ESC to exit
   - Clean shutdown
   - Shows statistics

5. **Comprehensive Documentation**
   - README explains everything
   - ETHICS.md covers legal implications
   - Code comments explain technical details

### What Real Malware Would Do (Don't)
```
❌ Hide its presence
❌ Encrypt/obfuscate code
❌ Auto-start on boot
❌ Exfiltrate data to server
❌ Resist removal
❌ Persist across restarts
```

---

## 📊 Security Implications

### Threat Model: How Real Attackers Use This
1. **Credential Theft**
   - Capture passwords as they're typed
   - Steal banking info, social media passwords
   - Compromise accounts

2. **Espionage**
   - Capture confidential information
   - Monitor executive communications
   - Steal trade secrets

3. **Compliance Violation**
   - Capture PII (Personal Identifiable Information)
   - GDPR violations ($20M+ fines)
   - HIPAA violations if healthcare data

### Defensive Measures
1. **Process Monitoring**
   ```bash
   # Watch for suspicious Python processes
   ps aux | grep python
   tasklist /v  # Windows
   ```

2. **Network Monitoring**
   ```
   Monitor for:
   - Unusual outbound connections
   - Exfiltration of keystroke data
   - Suspicious DNS queries
   ```

3. **File Monitoring**
   ```
   Watch for:
   - pynput library in system directories
   - Suspicious Python scripts in temp folders
   - Strange .json files with keystroke data
   ```

4. **Behavioral Detection**
   ```
   Monitor for:
   - Keyboard hook registration
   - Privileged process access
   - System API calls to monitor input
   ```

---

## 🛡️ Personal Defenses (What I'll Do)
- [ ] Use password manager (don't type passwords)
- [ ] Enable 2FA on all accounts
- [ ] Keep antivirus updated
- [ ] Monitor running processes
- [ ] Use hardware security key
- [ ] Check browser permissions
- [ ] Monitor bank accounts for suspicious activity

---

## 📖 Resources Consulted

### Libraries & Documentation
- [pynput Documentation](https://pynput.readthedocs.io/)
- [Python JSON Module](https://docs.python.org/3/library/json.html)
- [Windows win32gui](https://pypi.org/project/pywin32/)

### Security & Legal
- [CFAA - 18 U.S.C. § 1030](https://www.law.cornell.edu/uscode/text/18/1030)
- [ECPA - 18 U.S.C. § 2511](https://www.law.cornell.edu/uscode/text/18/2511)
- [OWASP - Input Validation](https://cheatsheetseries.owasp.org/)

### Related Research
- [Keylogger Detection Techniques](https://www.sans.org/)
- [Keystroke Dynamics for Authentication](https://scholar.google.com/)
- [Keystroke Dynamics as Biometric](https://ieeexplore.ieee.org/)

---

## 🎯 Testing Checklist

- [ ] Code runs without errors
- [ ] Keystroke logging works
- [ ] Window tracking works (Windows)
- [ ] JSON logs are properly formatted
- [ ] Consent prompt works
- [ ] ESC key stops the logger
- [ ] Logs directory is created
- [ ] Statistics are displayed
- [ ] Documentation is complete
- [ ] ETHICS.md is clear and comprehensive

---

## 🚀 Future Enhancements (Ideas)

### Short Term
- [ ] Add screenshot functionality (screenshot of active window)
- [ ] Add system information (OS, user, IP)
- [ ] Add more special key handling (Ctrl+C, Alt+Tab)
- [ ] Email logs periodically
- [ ] Add encryption for log files

### Medium Term
- [ ] Create web dashboard to view logs
- [ ] Add data visualization (keystroke patterns)
- [ ] Implement log rotation (don't fill disk)
- [ ] Add multi-system support (Linux/Mac window tracking)

### Long Term
- [ ] Machine learning to detect suspicious patterns
- [ ] Correlation with network traffic
- [ ] Integration with threat detection system
- [ ] Research paper on keystroke analysis

---

## 📈 Performance Notes

### Resource Usage
- CPU: < 1% (idle when waiting for keys)
- Memory: ~50MB (Python interpreter)
- Disk: ~1MB per 10,000 keystrokes (JSON format)
- Network: 0 bytes (local only)

### Tested On
- [ ] Windows 10/11
- [ ] macOS
- [ ] Linux (Ubuntu)

### Known Issues
- [ ] Window tracking only works on Windows
- [ ] Requires administrator rights
- [ ] Doesn't work on some terminal emulators
- [ ] Special characters might not log correctly

---

## 🎓 Lessons for Security Career

### This Helped Me Understand:
1. **Threat Modeling**: How attackers actually operate
2. **Defense Mechanisms**: What I need to protect against
3. **Legal Implications**: Serious consequences of misuse
4. **Ethical Security**: The importance of responsible disclosure
5. **System Design**: How to think about security holistically

### Skills Gained:
- ✅ OS-level programming (keyboard hooks)
- ✅ Python library integration
- ✅ JSON data handling
- ✅ Structured logging
- ✅ Security awareness
- ✅ Legal/ethical thinking

### What This Showed Me About Security:
- Security is not just code; it's about understanding threats
- Offense and defense are intertwined
- Ethics matter as much as technical skill
- Documentation is crucial for responsible research

---

## 💭 Reflections

### Why This Matters
Building defensive tools requires understanding offensive techniques. By creating a keylogger, I'm better equipped to:
- Detect real keyloggers in production
- Understand how attackers operate
- Design better defenses
- Educate others about the threat

### Ethical Considerations
- This could be used for harm if deployed incorrectly
- Responsibility to document clearly and gate behind consent
- Legal framework is clear but important to follow
- Educational purpose is legitimate security research

### Career Impact
This project demonstrates:
- Understanding of low-level system programming
- Ability to implement security tools responsibly
- Clear thinking about legal/ethical boundaries
- Professional documentation and disclosure

---

## 📅 Timeline

| Week | Task | Status |
|------|------|--------|
| 1 | Setup, basic logging | ✅ Complete |
| 2 | Window tracking, JSON | ✅ Complete |
| 3 | Testing, documentation | 🔄 In Progress |
| 4 | Medium article, blog post | ⏳ Pending |
| 5 | Portfolio site integration | ⏳ Pending |

---

## 🎯 Self-Assessment

**Technical Implementation**: 8/10
- Solid working code
- Good error handling
- Could add more features

**Documentation**: 9/10
- Clear README
- Comprehensive ETHICS.md
- Good code comments

**Legal/Ethical Awareness**: 10/10
- Strong legal disclaimers
- Explicit consent required
- Transparent and visible

**Overall Learning**: 9/10
- Learned a lot about threats
- Better understanding of defenses
- Clear on ethical boundaries

---

## 📝 Next Steps

1. **Test thoroughly** on different systems
2. **Write Medium article** explaining the project
3. **Get feedback** from security mentor
4. **Create demo video** for YouTube
5. **Integrate into portfolio site**
6. **Move to next tool** (Phishing Simulator)

---

**Last Updated**: 2024-05-10  
**Next Review**: 2024-05-17
