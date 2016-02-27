# Makefile to all the design pattern programs
CFLAGS = -Wall -g -c
SRC = src
INC = inc
CC = cc

all : main geeksforgeeks

main : main.o

geeksforgeeks : geeksforgeeks.o

geeksforgeeks.o : $(SRC)/geeksforgeeks.c $(INC)/geeksforgeeks.h
	$(CC) $(CFLAGS) $(SRC)/geeksforgeeks.c

main.o : $(SRC)/main.c $(INC)/main.h
	$(CC) $(CFLAGS) $(SRC)/main.c

.PHONY: clean
clean :
	rm -f main geeksforgeeks *.o  
