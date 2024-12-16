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
