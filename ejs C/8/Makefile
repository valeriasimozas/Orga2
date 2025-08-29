CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = mascara

all: $(TARGET)

$(TARGET): mascara.o
	$(CC) $(CFLAGS) $^ -o $@

mascara.o: mascara.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)
	
.PHONY: all clean