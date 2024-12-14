#include "llist.h"

#include <stdio.h>

int main() {
  Node *head = NULL;

  append(&head, 10);
  append(&head, 20);
  append(&head, 30);

  printf("Список после добавления элементов: ");
  displayList(head);

  deleteNode(&head, 20);
  printf("Список после удаления элемента 20: ");
  displayList(head);

  deleteNode(&head, 40);

  return 0;
}
