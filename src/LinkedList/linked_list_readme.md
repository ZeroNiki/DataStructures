# Linked list 

---

### **Описание функций**

1. **`createNode(int data)`**: 
   - Создает новый узел с заданным значением `data`.
   - Выделяет память для нового узла, инициализирует поле `data` и устанавливает `next` в `NULL`.

2. **`append(Node **head, int data)`**: 
   - Добавляет новый узел в конец списка.
   - Если список пуст (`head == NULL`), новый узел становится головой.
   - Если список не пуст, перемещается до конца списка и присоединяет новый узел.

3. **`deleteNode(Node **head, int key)`**: 
   - Удаляет первый узел, содержащий значение `key`.
   - Если узел с `key` найден, он удаляется, а указатель предыдущего узла связывается с узлом после удаленного.

4. **`displayList(Node *head)`**: 
   - Выводит данные всех узлов в списке.
   - Переходит по каждому узлу от начала списка до конца.

---

### **Диаграмма потока**

```
                             +------------------+
                             |      Начало      |
                             +------------------+
                                     |
                                     v
                             +------------------+
                             | createNode(data) |
                             +------------------+
                                     |
                                     v
                  +-----------------------------+
                  | Узел создан, data сохранено |
                  +-----------------------------+
                                     |
                  +------------------------------+
                  | append(head, data)          |
                  +------------------------------+
                                     |
        +----------------------------+----------------------------+
        |                                                         |
  +---------------------------+                           +----------------------+
  | head == NULL?             |                           | head != NULL         |
  | (Список пуст?)            |                           | Перейти к концу списка|
  +---------------------------+                           +----------------------+
        |                                                         |
        |                                                         v
        |                                       +-------------------------+
        v                                       | Присоединить новый узел |
  +-------------------------+                   +-------------------------+
  | Новый узел становится   |
  | началом списка          |
  +-------------------------+
                |
                +--------------------+
                                     |
                                     v
                             +-------------------+
                             | deleteNode(head, key) |
                             +-------------------+
                                     |
        +----------------------------+----------------------------+
        |                                                         |
  +---------------------------+                           +----------------------+
  | head == NULL?             |                           | head != NULL         |
  | (Список пуст?)            |                           | Поиск key            |
  +---------------------------+                           +----------------------+
        |                                                         |
        |                                                         v
        |                                       +-------------------------+
        |                                       | Узел с key найден       |
        |                                       | Удалить узел            |
        |                                       +-------------------------+
        |                                                         |
        +-----------------------> Узел с key не найден            |
                                     |                           |
                                     v                           v
                             +----------------+        +------------------+
                             |  Вывод "n/a"   |        | Узел удален      |
                             +----------------+        +------------------+
                                     |
                                     v
                             +-------------------+
                             | displayList(head) |
                             +-------------------+
                                     |
                             +-------------------+
                             | head == NULL?     |
                             | (Список пуст?)    |
                             +-------------------+
                                     |
                                     v
        +------------------------------------------------+
        | Перемещение по узлам и вывод "data -> " до конца|
        +------------------------------------------------+
                                     |
                                     v
                             +------------------+
                             | Вывод "NULL"     |
                             +------------------+
                                     |
                                     v
                             +------------------+
                             |      Конец       |
                             +------------------+
```

---

### **Пояснение диаграммы**

1. **Создание узла (`createNode`)**:
   - Создается новый узел с заданным значением.
   - Если выделение памяти не удалось, программа завершается.

2. **Добавление узла (`append`)**:
   - Если список пуст, новый узел становится первым.
   - Если список не пуст, функция перемещается к последнему узлу и добавляет новый.

3. **Удаление узла (`deleteNode`)**:
   - Если список пуст, выводится сообщение "n/a".
   - Ищется узел с заданным значением `key`. Если узел найден, он удаляется, а указатели перенастраиваются.

4. **Вывод списка (`displayList`)**:
   - Если список пуст, выводится сообщение "n/a".
   - В противном случае, значения узлов выводятся в формате `data -> ... -> NULL`.