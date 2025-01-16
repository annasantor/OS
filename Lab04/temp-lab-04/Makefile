# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Source files and target binaries
SOURCES = example1.c example2.c example3.c example4.c example5.c example6.c
TARGETS = example1 example2 example3 example4 example5 example6

# Default target
all: $(TARGETS)

# Build each binary
example1: example1.c
	$(CC) $(CFLAGS) -o example1 example1.c

example2: example2.c
	$(CC) $(CFLAGS) -o example2 example2.c

example3: example3.c
	$(CC) $(CFLAGS) -o example3 example3.c

example4: example4.c
	$(CC) $(CFLAGS) -o example4 example4.c

example5: example5.c
	$(CC) $(CFLAGS) -o example5 example5.c

example6: example6.c
	$(CC) $(CFLAGS) -o example6 example6.c
# Clean up
clean:
	rm -f $(TARGETS)

