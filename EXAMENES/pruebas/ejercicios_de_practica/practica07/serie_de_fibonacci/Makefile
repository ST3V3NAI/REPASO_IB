# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Abolaji Ibidokun Steven alu0101619613@ull.edu.es
# @date Nov 4 2024
# @brief Makefile file for the video tutorial
# 
# @see https://www.youtube.com/watch?v=rJ-C8q7KOew/**


# Compiler and flags
CXX := g++
CXXFLAGS := -std=c++11 -Wall -Wextra

# Program name
PROGRAM_NAME := serie_de_fibonacci

# Source files
SOURCES := serie_de_fibonacci_main.cc serie_de_fibonacci.cc

# Object files (generated from source files)
OBJECTS := $(SOURCES:.cc=.o)

# Default target
all: $(PROGRAM_NAME)

# Linking rule
$(PROGRAM_NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilation rule for object files
%.o: %.cc serie_de_fibonacci.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Clean rule
clean:
	rm -rf $(PROGRAM_NAME) $(OBJECTS)

# PHONY target to prevent conflicts with files named "clean"
.PHONY: clean

# Run the program
run: $(PROGRAM_NAME)
	./$(PROGRAM_NAME)