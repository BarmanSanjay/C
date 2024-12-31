# Makefile for the project

CC = gcc
CFLAGS = -Wall -I./include  # Include the header files in the 'include' directory

SRC = src/main.c src/add.c src/subtract.c  # All the source files
OBJ = $(SRC:.c=.o)  # Replace .c with .o to define the object files

TARGET = add_subtract # The output executable

# Default target
all: $(TARGET)

# Link the object files to create the executable
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# Compile the .c files to .o object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up the object files and the executable
clean:
	rm -f $(OBJ) $(TARGET)