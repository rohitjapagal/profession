# Makefile to all the design pattern programs
CFLAGS = -Wall -g -c
SRC = src
INC = inc
CC = cc

all : main
	@echo "Build completed - Algorithms Project"

main : main.o

main.o : $(SRC)/main.c $(INC)/main.h
	$(CC) $(CFLAGS) $(SRC)/main.c

.PHONY: clean
clean : 
	rm -f main *.o
	@echo "Clean up completed - Algorithms Project"
