#
#   Makefile
#

#special flags for compiller

CFLAGS = -g

all: program

program: main.o
	gcc -o program main.o

main.o: main.c
	gcc -c $(CFLAGS) main.c

.PHONY : clean
clean:
	rm program *.o
