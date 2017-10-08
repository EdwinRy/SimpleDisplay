from ctypes import *
import os
##print(os.environ)
print(cdll.LoadLibrary("/home/edwin/SimpleDisplay/bin/SimpleDisplay.so"))
