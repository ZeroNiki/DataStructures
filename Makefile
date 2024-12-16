CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11 -fsanitize=leak

BUILD = ./build
SRC = ./src

STACK = $(SRC)/Stack
QUEUE = $(SRC)/Queue
LLIST = $(SRC)/LinkedList
BTREE = $(SRC)/BinaryTree

OBJ1 = $(STACK)/stack.o $(STACK)/main.o
OBJ2 = $(QUEUE)/queue.o $(QUEUE)/main.o
OBJ3 = $(LLIST)/llist.o $(LLIST)/main.o
OBJ4 = $(BTREE)/btree.o $(BTREE)/main.o
 
TARGETS = stack queue llist btree

T1 = $(BUILD)/stack
T2 = $(BUILD)/queue
T3 = $(BUILD)/llist
T4 = $(BUILD)/btree

all: $(TARGETS)

stack: $(OBJ1)
	$(CC) $(CFLAGS) -o $(T1) $(OBJ1)

queue: $(OBJ2)
	$(CC) $(CFLAGS) -o $(T2) $(OBJ2)

llist: $(OBJ3)
	$(CC) $(CFLAGS) -o $(T3) $(OBJ3)

btree: $(OBJ4)
	$(CC) $(CFLAGS) -o $(T4) $(OBJ4)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD)
	rm $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4)
