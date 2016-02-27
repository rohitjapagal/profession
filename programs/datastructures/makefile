# Makefile to all the design pattern programs

CXXFLAGS = -Wall -g -c 
SRC = src
INC = inc
CXX = g++
CC = $(CXX)

all : linked-list circular-linked-list queue doubly-linked-list stack binary-tree binary-search-tree heap hashing \
      graph hello-world
	@echo "Build completed - Data Structure Project"
linked-list : linked-list.o 
circular-linked-list : circular-linked-list.o
queue : queue.o
doubly-linked-list : doubly-linked-list.o
stack : stack.o
binary-tree : binary-tree.o
binary-search-tree : binary-search-tree.o
heap : heap.o
hashing : hashing.o
graph : graph.o
hello-world : hello-world.o 

linked-list.o : $(SRC)/linked-list.cpp $(INC)/linked-list.h
	$(CC) $(CXXFLAGS) $(SRC)/linked-list.cpp 

circular-linked-list.o : $(SRC)/circular-linked-list.cpp $(INC)/circular-linked-list.h
	$(CC) $(CXXFLAGS) $(SRC)/circular-linked-list.cpp

queue.o : $(SRC)/queue.cpp $(INC)/queue.h
	$(CC) $(CXXFLAGS) $(SRC)/queue.cpp

doubly-linked-list.o : $(SRC)/doubly-linked-list.cpp $(INC)/doubly-linked-list.h
	$(CC) $(CXXFLAGS) $(SRC)/doubly-linked-list.cpp

stack.o : $(SRC)/stack.cpp $(INC)/stack.h
	$(CC) $(CXXFLAGS) $(SRC)/stack.cpp

binary-tree.o : $(SRC)/binary-tree.cpp $(INC)/binary-tree.h
	$(CC) $(CXXFLAGS) $(SRC)/binary-tree.cpp

binary-search-tree.o : $(SRC)/binary-search-tree.cpp $(INC)/binary-search-tree.h
	$(CC) $(CXXFLAGS) $(SRC)/binary-search-tree.cpp

heap.o : $(SRC)/heap.cpp $(INC)/heap.h
	$(CC) $(CXXFLAGS) $(SRC)/heap.cpp

hashing.o : $(SRC)/hashing.cpp $(INC)/hashing.h
	$(CC) $(CXXFLAGS) $(SRC)/hashing.cpp

graph.o : $(SRC)/graph.cpp $(INC)/graph.h
	$(CC) $(CXXFLAGS) $(SRC)/graph.cpp

hello-world.o : $(SRC)/hello-world.cpp
	$(CC) $(CXXFLAGS) $(SRC)/hello-world.cpp

.PHONY: clean
clean : 
	rm -f *.o  hello-world graph hashing heap binary-search-tree binary-tree stack doubly-linked-list queue circular-linked-list linked-list
	@echo "Clean up completed - Data Structure Project"
