all: sieve.o main.o
	gcc -o test sieve.o main.o -lm

main.o: main.c sieve.h
	gcc -c main.c

sieve.o: sieve.c sieve.h
	gcc -c sieve.c

run:
	./test

clear:
	rm *.o
	rm test
