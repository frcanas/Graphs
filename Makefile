# Compiler:
# -> For C programs, use gcc;
# -> For C++ programs, use g++;
CC = g++

# Compiler Flags:
# -> -Wall is used to warn you if the compiler detects anything 'weird';
# -> -O3 is an optimization flag, meant to speed up your program (can also be -O1 or -O2);
# -> You may also add -pg if you want to use GPROF, or -g if you want to use GDB;
CFLAGS = -Wall -g

# Source, object and target file directory:
SRC = src
OBJ = obj
BIN = bin

# Define the C++ source files
SOURCE_FILES = $(wildcard $(SRC)/*.cpp)

# Define the C++ object files
OBJECT_FILES = $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SOURCE_FILES))

# Define the binary file
MAIN = $(BIN)/main

all: $(MAIN)

$(MAIN): $(OBJECT_FILES)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJECT_FILES)

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	$(RM) $(OBJECT_FILES) $(MAIN)
