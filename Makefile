#
#   Makefile
#

#special flags for compiller

CFLAGS = -pg -g -O0

all: program

program: main.o
	gcc -o program main.o -pg

main.o: main.c
	gcc -c $(CFLAGS) main.c

.PHONY : clean
clean:
	rm program *.o
