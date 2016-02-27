# Makefile for the Car Parking Project
CFLAGS = -Wall -g -c
SRC = src
INC = inc
CC = cc -pthread

all : main entry-system exit-system
	@echo "Build completed - Car Parking Project"

main : main.o
entry-system : entry-system.o
exit-system : exit-system.o

main.o : $(SRC)/main.c $(INC)/main.h
	$(CC) $(CFLAGS) $(SRC)/main.c
  
entry-system.o : $(SRC)/entry-system.c $(INC)/entry-system.h
	$(CC) $(CFLAGS) $(SRC)/entry-system.c
  
exit-system.o : $(SRC)/exit-system.c $(INC)/exit-system.h
	$(CC) $(CFLAGS) $(SRC)/exit-system.c
  
.PHONY: clean
clean :
	rm -f *.o main entry-system exit-system
	@echo "Clean up completed - Car Parking Project"
