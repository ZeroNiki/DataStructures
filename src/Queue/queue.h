#ifndef QUEUE_H
#define QUEUE_H

#define MAX 100

typedef struct {
  int data[MAX];
  int front;
  int rear;
} Queue;

void initQ(Queue *queue);
int isEmpty(const Queue *queue);
int isFull(const Queue *queue);
void endqueue(Queue *queue, int value);
int dequeue(Queue *queue);
int peek(const Queue *queue);

#endif // QUEUE_H
