CC = g++
CFLAGS = -Wall -g

task1: main_simple.o
	$(CC) $(CFLAGS) -o task1 main_simple.o

main_simple.o: main_simple.cpp
	$(CC) $(CFLAGS) -c main_simple.cpp

.PHONY:
clean:
	rm -f main_simple.o result.bin task1