# Makefile to all the design pattern programs
CFLAGS = -Wall -g -c
SRC = src
INC = inc
CC = cc
TARGETS = main pointer file test

all : $(TARGETS) 
	@echo "Build completed - C Project"

main : main.o
main.o : $(SRC/main.c) $(INC)/main.h
	$(CC) $(CFLAGS) $(SRC)/main.c

pointer: pointer.o
pointer.o : $(SRC/pointer.c) $(INC)/pointer.h
	$(CC) $(CFLAGS) $(SRC)/pointer.c

file : file.o
file.o : $(SRC/file.c) $(INC)/file.h
	$(CC) $(CFLAGS) $(SRC)/file.c

test : test.o
test.o : $(SRC/test.c) $(INC)/test.h
	$(CC) $(CFLAGS) $(SRC)/test.c


.PHONY: clean
clean : 
	rm -f $(TARGETS) *.o  
	@echo "Clean up completed - C Project"
