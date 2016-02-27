# Makefile to compile the design pattern
SRC = src
INC = inc
CXXFLAGS = -Wall -g -c 
CXX = g++
CC = $(CXX)

all : abstract-factory adapter bridge builder chain-of-responsibility command composite decorator facade factory-weight fly-weight interpreter iterator mediator memento observer prototype proxy singleton state strategy template-method visitor
	@echo "Build completed - Design Pattern Project"

abstract-factory : abstract-factory.o

abstract-factory.o : $(SRC)/abstract-factory.cpp $(INC)/abstract-factory.h 
	$(CXX) $(CXXFLAGS) $(SRC)/abstract-factory.cpp

adapter : adapter.o 

adapter.o : $(SRC)/adapter.cpp $(INC)/adapter.h 
	$(CXX) $(CXXFLAGS) $(SRC)/adapter.cpp

bridge : bridge.o 

bridge.o : $(SRC)/bridge.cpp $(INC)/bridge.h 
	$(CXX) $(CXXFLAGS) $(SRC)/bridge.cpp

builder : builder.o 

builder.o : $(SRC)/builder.cpp $(INC)/builder.h
	$(CXX) $(CXXFLAGS) $(SRC)/builder.cpp

chain-of-responsibility : chain-of-responsibility.o 

chain-of-responsibility.o : $(SRC)/chain-of-responsibility.cpp $(INC)/chain-of-responsibility.h 
	$(CXX) $(CXXFLAGS) $(SRC)/chain-of-responsibility.cpp

command : command.o
command.o : $(SRC)/command.cpp $(INC)/command.h
	$(CXX) $(CXXFLAGS) $(SRC)/command.cpp

composite : composite.o
composite.o : $(SRC)/composite.cpp $(INC)/composite.h
	$(CXX) $(CXXFLAGS) $(SRC)/composite.cpp

decorator : decorator.o
decorator.o : $(SRC)/decorator.cpp $(INC)/decorator.h
	$(CXX) $(CXXFLAGS) $(SRC)/decorator.cpp

facade : facade.o 
facade.o : $(SRC)/facade.cpp $(INC)/facade.h
	$(CXX) $(CXXFLAGS) $(SRC)/facade.cpp

factory-weight : factory-weight.o
factory-weight.o : $(SRC)/factory-weight.cpp $(INC)/factory-weight.h
	$(CXX) $(CXXFLAGS) $(SRC)/factory-weight.cpp

fly-weight : fly-weight.o
fly-weight.o : $(SRC)/fly-weight.cpp $(INC)/fly-weight.h
	$(CXX) $(CXXFLAGS) $(SRC)/fly-weight.cpp

interpreter : interpreter.o
interpreter.o : $(SRC)/interpreter.cpp $(INC)/interpreter.h
	$(CXX) $(CXXFLAGS) $(SRC)/interpreter.cpp

iterator : iterator.o
iterator.o : $(SRC)/iterator.cpp $(INC)/iterator.h
	$(CXX) $(CXXFLAGS) $(SRC)/iterator.cpp

mediator : mediator.o
mediator.o : $(SRC)/mediator.cpp $(INC)/mediator.h
	$(CXX) $(CXXFLAGS) $(SRC)/mediator.cpp

memento : memento.o
memento.o : $(SRC)/memento.cpp $(INC)/memento.h
	$(CXX) $(CXXFLAGS) $(SRC)/memento.cpp

observer : observer.o 
observer.o : $(SRC)/observer.cpp $(INC)/observer.h
	$(CXX) $(CXXFLAGS) $(SRC)/observer.cpp

prototype : prototype.o
prototype.o : $(SRC)/prototype.cpp $(INC)/prototype.h
	$(CXX) $(CXXFLAGS) $(SRC)/prototype.cpp

proxy : proxy.o 
proxy.o : $(SRC)/proxy.cpp $(INC)/proxy.h
	$(CXX) $(CXXFLAGS) $(SRC)/proxy.cpp

singleton : singleton.o
singleton.o : $(SRC)/singleton.cpp $(INC)/singleton.h
	$(CXX) $(CXXFLAGS) $(SRC)/singleton.cpp

state : state.o
state.o : $(SRC)/state.cpp $(INC)/state.h
	$(CXX) $(CXXFLAGS) $(SRC)/state.cpp

strategy : strategy.o
strategy.o : $(SRC)/strategy.cpp $(INC)/strategy.h
	$(CXX) $(CXXFLAGS) $(SRC)/strategy.cpp

template-method : template-method.o
template-method.o : $(SRC)/template-method.cpp $(INC)/template-method.h
	$(CXX) $(CXXFLAGS) $(SRC)/template-method.cpp

visitor : visitor.o
visitor.o : $(SRC)/visitor.cpp $(INC)/visitor.h
	$(CXX) $(CXXFLAGS) $(SRC)/visitor.cpp

.PHONY : clean

clean : 
	rm -f abstract-factory adapter bridge builder chain-of-responsibility command composite decorator facade factory-weight fly-weight interpreter iterator mediator memento observer prototype proxy singleton state strategy template-method visitor *.o
	@echo "Clean up completed - Design Patterns Project"
