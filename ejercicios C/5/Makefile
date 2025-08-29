CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = mensaje_secreto

all: $(TARGET)

$(TARGET): mensaje_secreto.o
	$(CC) $(CFLAGS) $^ -o $@

mensaje_secreto.o: mensaje_secreto.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean