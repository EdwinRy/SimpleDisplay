from ctypes import *
import os
##print(os.environ)
print(cdll.LoadLibrary(str(os.getcwd())+"/SimpleDisplay.so"))
