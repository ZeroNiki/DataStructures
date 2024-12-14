#ifndef STACK_H
#define STACK_H

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

void initStack(Stack *stack);
int isEmpty(const Stack *stack);
int isFull(const Stack *stack);
void push(Stack *stack, int value);
int pop(Stack *stack);
int peek(Stack *stack);

#endif  // STACK_H
