# Binary Tree 

Этот код реализует основные операции с **бинарным деревом поиска (Binary Search Tree)**. Он включает функции для создания узлов, вставки, поиска, удаления, обхода дерева и освобождения памяти.

---

#### Заголовок: `btree.h`

```c
#ifndef BTREE_H
#define BTREE_H

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node *createNode(int value);
Node *insertNode(Node *root, int value);
Node *searchValue(Node *root, int key);
Node *findMin(Node *root);
Node *deleteNode(Node *root, int key);
void freeNode(Node *root);

// Tree Traversal
// Left-Root-Right (in-order) (symmetric)
void inOrder(Node *root);

// Root-Left-Right (pre-order) (direct)
void preOrder(Node *root);

// Left-Right-Root (post-order) (reverse)
void postOrder(Node *root);

#endif  // BTREE_H
```

---

### Функции

#### 1. **Создание узла**
```c
Node *createNode(int value);
```
- **Описание**: Создаёт новый узел дерева с указанным значением.
- **Параметры**:
  - `value` — значение, которое будет сохранено в узле.
- **Возвращает**: Указатель на новый узел или `NULL`, если не удалось выделить память.

---

#### 2. **Вставка узла**
```c
Node *insertNode(Node *root, int value);
```
- **Описание**: Вставляет новый узел с заданным значением в бинарное дерево поиска.
- **Параметры**:
  - `root` — корневой узел дерева.
  - `value` — значение, которое нужно вставить.
- **Возвращает**: Указатель на корень дерева после вставки.

---

#### 3. **Поиск значения**
```c
Node *searchValue(Node *root, int key);
```
- **Описание**: Ищет узел с заданным значением в дереве.
- **Параметры**:
  - `root` — корневой узел дерева.
  - `key` — значение для поиска.
- **Возвращает**: Указатель на найденный узел или `NULL`, если значение отсутствует.

---

#### 4. **Минимальный узел**
```c
Node *findMin(Node *root);
```
- **Описание**: Находит узел с минимальным значением в дереве.
- **Параметры**:
  - `root` — корневой узел дерева.
- **Возвращает**: Указатель на узел с минимальным значением.

---

#### 5. **Удаление узла**
```c
Node *deleteNode(Node *root, int key);
```
- **Описание**: Удаляет узел с заданным значением из дерева.
- **Параметры**:
  - `root` — корневой узел дерева.
  - `key` — значение, которое нужно удалить.
- **Возвращает**: Указатель на корень дерева после удаления.

---

#### 6. **Обходы дерева**

**In-order обход:**
```c
void inOrder(Node *root);
```
- **Описание**: Посещает узлы в порядке: левое поддерево → корень → правое поддерево.

**Pre-order обход:**
```c
void preOrder(Node *root);
```
- **Описание**: Посещает узлы в порядке: корень → левое поддерево → правое поддерево.

**Post-order обход:**
```c
void postOrder(Node *root);
```
- **Описание**: Посещает узлы в порядке: левое поддерево → правое поддерево → корень.

---

#### 7. **Освобождение дерева**
```c
void freeNode(Node *root);
```
- **Описание**: Рекурсивно освобождает память, выделенную для узлов дерева.
- **Параметры**:
  - `root` — корневой узел дерева.

---

### Визуализация дерева

Предположим, мы добавили следующие значения в дерево: **50, 30, 70, 20, 40, 60, 80**.

#### Построенное бинарное дерево поиска:

```
         50
       /    \
     30      70
    /  \    /  \
   20  40  60  80
```

#### Пример обходов:
1. **In-order обход (сортированный порядок):** `20 30 40 50 60 70 80`
2. **Pre-order обход:** `50 30 20 40 70 60 80`
3. **Post-order обход:** `20 40 30 60 80 70 50`

---

### Пример использования

```c
int main() {
    struct Node* root = NULL;

    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 70);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    if (root != NULL) {
        printf("Parent (highest) node: %d\n", root->data);
    }

    printf("In-order traversal: ");
    inOrder(root);
    printf("\n");

    printf("Pre-order traversal: ");
    preOrder(root);
    printf("\n");

    printf("Post-order traversal: ");
    postOrder(root);
    printf("\n");

    printf("After deleting 20\n");
    root = deleteNode(root, 20);

    printf("In-order traversal: ");
    inOrder(root);
    printf("\n");

    printf("Pre-order traversal: ");
    preOrder(root);
    printf("\n");

    printf("Post-order traversal: ");
    postOrder(root);
    printf("\n");

    freeNode(root);
    return 0;
}
```

---

### Визуализация дерева после удаления узла `20`:

```
         50
       /    \
     30      70
       \    /  \
       40  60  80
```

**In-order traversal**: `30 40 50 60 70 80`
**Pre-order traversal**: `50 30 40 70 60 80` 
**Post-order traversal**: `40 30 60 80 70 50`
