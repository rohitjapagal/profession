# Makefile to all the design pattern programs
CXXFLAGS = -Wall -g -c 
SRC = src
INC = inc
CC = cc -pthread

all : program-01 program-02 process
	@echo "Build completed - Linux Project"

program-01 : program-01.o
program-02 : program-02.o
process : process.o 

program-01.o : $(SRC)/program-01.c $(INC)/program-01.h
	$(CC) $(CXXFLAGS) $(SRC)/program-01.c

program-02.o : $(SRC)/program-02.c $(INC)/program-02.h
	$(CC) $(CXXFLAGS) $(SRC)/program-02.c

process.o : $(SRC)/process.c $(INC)/process.h
	$(CC) $(CXXFLAGS) $(SRC)/process.c 

.PHONY: clean
clean : 
	rm -f *.o  program-01 program-02 process
	@echo "Clean up done - Linux Project"
