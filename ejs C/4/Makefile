CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = punto_flotante

all: $(TARGET)

$(TARGET): punto_flotante.o
	$(CC) $(CFLAGS) $^ -o $@

punto_flotante.o: punto_flotante.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean