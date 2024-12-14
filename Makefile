CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11 -fsanitize=leak

BUILD = ./build
SRC = ./src

STACK = $(SRC)/Stack
QUEUE = $(SRC)/Queue
LLIST = $(SRC)/LinkedList

OBJ1 = $(STACK)/stack.o $(STACK)/main.o
OBJ2 = $(QUEUE)/queue.o $(QUEUE)/main.o
OBJ3 = $(LLIST)/llist.o $(LLIST)/main.o
 
TARGETS = stack queue llist

T1 = $(BUILD)/stack
T2 = $(BUILD)/queue
T3 = $(BUILD)/llist

all: $(TARGETS)

stack: $(OBJ1)
	$(CC) $(CFLAGS) -o $(T1) $(OBJ1)

queue: $(OBJ2)
	$(CC) $(CFLAGS) -o $(T2) $(OBJ2)

llist: $(OBJ3)
	$(CC) $(CFLAGS) -o $(T3) $(OBJ3)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD)
	rm $(OBJ1) $(OBJ2) $(OBJ3)
