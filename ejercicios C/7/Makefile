CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = asignacion

all: $(TARGET)

$(TARGET): asignacion.o
	$(CC) $(CFLAGS) $^ -o $@

asignacion.o: asignacion.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)
	
.PHONY: all clean