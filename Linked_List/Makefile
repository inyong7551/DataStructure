CC = gcc
CFLAGS = -W -Wall -g
OBJS = main.o list.o

.PHONY: all clean
all: main

clean:
	rm -vf main *.o

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ -lfl

main.o: main.c list.h
	$(CC) $(CFLAGS) -c main.c

list.o: list.c list.h
	$(CC) $(CFLAGS) -c list.o