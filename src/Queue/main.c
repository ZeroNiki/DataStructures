#include "queue.h"

#include <stdio.h>


int main() {
  Queue queue;
  initQ(&queue);

  endqueue(&queue, 10);
  endqueue(&queue, 20);
  endqueue(&queue, 30);

  printf("Front element is: %d\n", peek(&queue));
  printf("Dequeued element: %d\n", dequeue(&queue));
  printf("Dequeued element: %d\n", dequeue(&queue));
  printf("Dequeued element: %d\n", dequeue(&queue));
  printf("Dequeued element: %d\n", dequeue(&queue)); // ERROR

  return 0;
}
