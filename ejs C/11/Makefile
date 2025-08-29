CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = funcion_larga

all: $(TARGET)

$(TARGET): funcion_larga.o
	$(CC) $(CFLAGS) $^ -o $@

funcion_larga.o: funcion_larga.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)
	
.PHONY: all clean