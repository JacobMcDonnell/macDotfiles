CC=gcc
CFLAGS=-std=c89

all: main

main: main.c ex2-6 ex2-7 ex2-8
	$(CC) $(CFLAGS) -Wall -c main.c
	$(CC) $(CFLAGS) -o main ex2-6.o ex2-7.o ex2-8.o main.o

ex2-6: ex2-6.c
	$(CC) $(CFLAGS) -Wall -c ex2-6.c

ex2-7: ex2-7.c
	$(CC) $(CFLAGS) -Wall -c ex2-7.c

ex2-8: ex2-8.c
	$(CC) $(CFLAGS) -Wall -c ex2-8.c