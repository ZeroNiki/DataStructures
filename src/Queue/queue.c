#include "queue.h"

#include <stdio.h>

void initQ(Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

int isEmpty(const Queue *queue) { return queue->front == -1 || queue->rear == -1; }

int isFull(const Queue *queue) { return queue->rear == MAX - 1; }

void endqueue(Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue overflow!\n");
        return;
    }

    if (isEmpty(queue)) {
        queue->front = 0;
    }

    queue->data[++queue->rear] = value;
}

int dequeue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow!");
        return -1;
    }

    return queue->data[queue->front++];
}

int peek(const Queue *queue) { return queue->data[queue->front]; }
