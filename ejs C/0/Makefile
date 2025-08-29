CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = base

all: $(TARGET)

$(TARGET): base.o
	$(CC) $(CFLAGS) $^ -o $@

base.o: base.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)
	
.PHONY: all clean