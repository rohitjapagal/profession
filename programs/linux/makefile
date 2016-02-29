# Makefile to all the design pattern programs
CXXFLAGS = -Wall -g -c -DDEBUG
SRC = src
INC = inc
CC = cc -pthread

all : program-01 program-02 process ipc-pipes ipc-semaphore \
ipc-sharedmemory ipc-socket ipc-mappedmemory
	@echo "Build Done - Linux Project"

program-01 : program-01.o
program-02 : program-02.o
process : process.o 
ipc-pipes : ipc-pipes.o
ipc-semaphore : ipc-semaphore.o
ipc-sharedmemory : ipc-sharedmemory.o
ipc-socket : ipc-socket.o
ipc-mappedmemory : ipc-mappedmemory.o

program-01.o : $(SRC)/program-01.c $(INC)/program-01.h
	$(CC) $(CXXFLAGS) $(SRC)/program-01.c

program-02.o : $(SRC)/program-02.c $(INC)/program-02.h
	$(CC) $(CXXFLAGS) $(SRC)/program-02.c

process.o : $(SRC)/process.c $(INC)/process.h
	$(CC) $(CXXFLAGS) $(SRC)/process.c 

ipc-pipes.o : $(SRC)/ipc-pipes.c $(INC)/ipc-pipes.h
	$(CC) $(CXXFLAGS) $(SRC)/ipc-pipes.c 

ipc-semaphore.o : $(SRC)/ipc-semaphore.c $(INC)/ipc-semaphore.h
	$(CC) $(CXXFLAGS) $(SRC)/ipc-semaphore.c 

ipc-sharedmemory.o : $(SRC)/ipc-sharedmemory.c $(INC)/ipc-sharedmemory.h
	$(CC) $(CXXFLAGS) $(SRC)/ipc-sharedmemory.c 

ipc-socket.o : $(SRC)/ipc-socket.c $(INC)/ipc-socket.h
	$(CC) $(CXXFLAGS) $(SRC)/ipc-socket.c 

ipc-mappedmemory.o : $(SRC)/ipc-mappedmemory.c $(INC)/ipc-mappedmemory.h
	$(CC) $(CXXFLAGS) $(SRC)/ipc-mappedmemory.c 

.PHONY: clean
clean : 
	rm -f *.o  program-01 program-02 process ipc-pipes ipc-semaphore \
	ipc-sharedmemory ipc-socket ipc-mappedmemory
	@echo "Clean up done - Linux Project"
