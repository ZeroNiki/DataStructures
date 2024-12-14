#ifndef LLIST_H
#define LLIST_H

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *createNode(int data);
void append(Node **head, int data);
void deleteNode(Node **head, int key);
void displayList(Node *head);

#endif // LLIST_H
