# Setting some variables in order to simlify

# Set the compiler
CC = g++

# Set flags for linker
CFLAGS = -c -Wall

# Set directiry with .o files
DIR = build

main: $(DIR)/main.o $(DIR)/func.o
	$(CC) $(DIR)/main.o $(DIR)/func.o -o main

$(DIR)/main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -o $(DIR)/main.o

$(DIR)/func.o: func.cpp
	$(CC) $(CFLAGS) func.cpp -o $(DIR)/func.o

clean:
	rm -rf *.o main

