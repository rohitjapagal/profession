#Makefile to compile all the files for C Programming by Dennis Ritchie
CXXFLAGS = -Wall -g -c 
SRC = src
INC = inc
CC = cc

all : chapter01_01 example01_01 

chapter01_01 : chapter01_01.o 
example01_01 : example01_01.o

chapter01_01.o : $(SRC)/chapter01_01.c 
	$(CC) $(CXXFLAGS) $(SRC)/chapter01_01.c

example01_01.o : $(SRC)/example01_01.c
	$(CC) $(CXXFLAGS) $(SRC)/example01_01.c

.PHONY: clean
clean :
	rm -f *.o chapter01_01 example01_01
