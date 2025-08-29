CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = tamanos

all: $(TARGET)

$(TARGET): tamanos.o
	$(CC) $(CFLAGS) $^ -o $@

tamanos.o: tamanos.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean