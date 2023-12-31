# Define the compiler - gcc
CC = gcc
# Compiler flags
CFLAGS = -Wall -g -pg -o3  -fprofile-arcs -ftest-coverage -g -Werror
# Source files
SOURCES = main.c functions.c
# Include directories
INCLUDES = -I.
# Libraries
LIBS = -lm
# Output executable
TARGET = main
# Default rule
all : $(TARGET)
# Compile the source files and link them to create the executable
$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(TARGET) $(SOURCES) $(LIBS)
# Clean up object files and the executable
clean:
	rm -f $(TARGET) *.gcno *.gcda *.gcov
# PHONY rule to avoid conflicts with filenames
.PHONY: clean
