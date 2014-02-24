
main.o:
	gcc -c main.c

program:
	gcc -o program main.o

.PHONY : clean
clean:
	rm program
