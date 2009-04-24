
CC = gcc -Wall -std=c99

OBJ = main.o cool_lib.o

.c.o: 
	$(CC) -c $< -o $@

default: main

main: $(OBJ)
	$(CC) $(OBJ) -o $@


