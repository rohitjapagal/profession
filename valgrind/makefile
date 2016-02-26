# Makefile to all the design pattern programs
CFLAGS = -Wall -g -c
SRC = src
INC = inc
CC = g++

all : valgrind01

valgrind01 : valgrind01.o
valgrind01.o : $(SRC/valgrind01.cpp) $(INC)/valgrind01.h
	$(CC) $(CFLAGS) $(SRC)/valgrind01.cpp

.PHONY: clean
clean : 
	rm -f valgrind01 *.o cachegrind* callgrind* bb* massif*
