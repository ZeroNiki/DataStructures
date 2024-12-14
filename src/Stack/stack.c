#include "stack.h"

#include <stdio.h>

void initStack(Stack *stack) { stack->top = -1; }

int isEmpty(const Stack *stack) { return stack->top == -1; }

int isFull(const Stack *stack) { return stack->top == MAX - 1; }

void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow!\n");
        return;
    }

    stack->data[++stack->top] = value;
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }

    return stack->data[stack->top--];
}

int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }

    return stack->data[stack->top];
}
