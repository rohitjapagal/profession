# make file to compile the python code
compile = python
SRC = src
all : helloWorld.tmp
	@echo "Build done - Python Project"

helloWorld.tmp : src/helloWorld.py 
	$(compile) src/helloWorld.py
	@touch helloWorld.tmp

.PHONY : clean
clean :
	rm -f *.tmp
	@echo "Clean up done - Python Project"
