# Makefile to all the design pattern programs
CFLAGS = -Wall -g -c
SRC = src
INC = inc
CC = g++

all : main binarytree vector-test array-test deque-test forward-list-test list-test map-test queue-test set-test stack-test unordered-map-test unordered-set-test

main : main.o
main.o : $(SRC/main.c) $(INC)/main.h
	$(CC) $(CFLAGS) $(SRC)/main.c

vector-test : vector-test.o
vector-test.o : $(SRC/vector-test.cpp) $(INC)/vector-test.h
	$(CC) $(CFLAGS) $(SRC)/vector-test.cpp

array-test : array-test.o
array-test.o : $(SRC/array-test.cpp) $(INC)/array-test.h
	$(CC) $(CFLAGS) $(SRC)/array-test.cpp

deque-test : deque-test.o
deque-test.o : $(SRC/deque-test.cpp) $(INC)/deque-test.h
	$(CC) $(CFLAGS) $(SRC)/deque-test.cpp

forward-list-test : forward-list-test.o
forward-list-test.o : $(SRC/forward-list-test.cpp) $(INC)/forward-list-test.h
	$(CC) $(CFLAGS) $(SRC)/forward-list-test.cpp

list-test : list-test.o
list-test.o : $(SRC/list-test.cpp) $(INC)/list-test.h
	$(CC) $(CFLAGS) $(SRC)/list-test.cpp

map-test : map-test.o
map-test.o : $(SRC/map-test.cpp) $(INC)/map-test.h
	$(CC) $(CFLAGS) $(SRC)/map-test.cpp

queue-test : queue-test.o
queue-test.o : $(SRC/queue-test.cpp) $(INC)/queue-test.h
	$(CC) $(CFLAGS) $(SRC)/queue-test.cpp

set-test : set-test.o
set-test.o : $(SRC/set-test.cpp) $(INC)/set-test.h
	$(CC) $(CFLAGS) $(SRC)/set-test.cpp

stack-test : stack-test.o
stack-test.o : $(SRC/stack-test.cpp) $(INC)/stack-test.h
	$(CC) $(CFLAGS) $(SRC)/stack-test.cpp

unordered-map-test : unordered-map-test.o
unordered-map-test.o : $(SRC/unordered-map-test.cpp) $(INC)/unordered-map-test.h
	$(CC) $(CFLAGS) $(SRC)/unordered-map-test.cpp

unordered-set-test : unordered-set-test.o
unordered-set-test.o : $(SRC/unordered-set-test.cpp) $(INC)/unordered-set-test.h
	$(CC) $(CFLAGS) $(SRC)/unordered-set-test.cpp	

binarytree : binarytree.o
binarytree.o : $(SRC/binarytree.cpp) $(INC)/binarytree.h
	$(CC) $(CFLAGS) $(SRC)/binarytree.cpp

.PHONY: clean
clean : 
	rm -f main binarytree vectortest *.o  
