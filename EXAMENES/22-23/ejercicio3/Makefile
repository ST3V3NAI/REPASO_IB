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
PROGRAM_NAME := algoritmo_de_luhn

# Source files
SOURCES := algoritmo_de_luhn_main.cc algoritmo_de_luhn.cc

# Object files (generated from source files)
OBJECTS := $(SOURCES:.cc=.o)

# Default target
all: $(PROGRAM_NAME)

# Linking rule
$(PROGRAM_NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilation rule for object files
%.o: %.cc algoritmo_de_luhn.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Clean rule
clean:
	rm -rf $(PROGRAM_NAME) $(OBJECTS)

# PHONY target to prevent conflicts with files named "clean"
.PHONY: clean

# Run the program
run: $(PROGRAM_NAME)
	./$(PROGRAM_NAME)