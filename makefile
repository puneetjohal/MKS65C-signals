all: signals.o
	gcc signals.o

run:
	./a.out

signals.o: signals.c
	gcc -c signals.c

clear:
	rm *.o
	rm *.out
