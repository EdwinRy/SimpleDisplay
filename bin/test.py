from ctypes import *
import os
##print(os.environ)
window = cdll.LoadLibrary(str(os.getcwd())+"/SimpleDisplay.so")
window.openDisplay(c_int(800),c_int(600));
while window.isWindowClosed():
    window.updateDisplay();
window.closeDisplay();
