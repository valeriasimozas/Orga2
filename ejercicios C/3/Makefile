CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = tamanos_ancho_fijo

all: $(TARGET)

$(TARGET): tamanos_ancho_fijo.o
	$(CC) $(CFLAGS) $^ -o $@

tamanos.o: tamanos_ancho_fijo.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean