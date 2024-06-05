# Makefile for compiling various vulnerability demonstration programs

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -m32

# Targets and source files
TARGETS = buffer_overflow integer_overflow nullpointer format_string racecondition useafterfree heap insecureimplementation commandinjection doublefree

# Default target
all: $(TARGETS)

# Rules to build each target
buffer_overflow: buffer_overflow.c
	$(CC) -o buffer_overflow buffer_overflow.c

integer_overflow: integer_overflow.c
	$(CC) -o integer_overflow integer_overflow.c

nullpointer: nullpointer.c
	$(CC) -o nullpointer nullpointer.c

format_string: format_string.c
	$(CC) -o format_string format_string.c $(CFLAGS)

racecondition: racecondition.c
	$(CC) -o racecondition racecondition.c

useafterfree: useafterfree.c
	$(CC) -o useafterfree useafterfree.c

heap: heap.c
	$(CC) -o heap heap.c

insecureimplementation: insecureimplementation.c
	$(CC) -o insecureimplementation insecureimplementation.c

commandinjection: commandinjection.c
	$(CC) -o commandinjection commandinjection.c

doublefree: doublefree.c
	$(CC) -o doublefree doublefree.c

# Clean target to remove compiled binaries
clean:
	rm -f $(TARGETS)

# Phony targets
.PHONY: all clean
