all:
	gcc -I -Wall -fPIC -c src/SimpleDisplay.c -o bin/SimpleDisplay.o
	gcc -shared -lSDL2 -o bin/SimpleDisplay.so bin/SimpleDisplay.o
	rm bin/SimpleDisplay.o
	
