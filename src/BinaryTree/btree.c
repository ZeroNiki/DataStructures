#include "btree.h"

#include <stdio.h>
#include <stdlib.h>

Node *createNode(int value) {
    Node *new_node = (Node *)malloc(sizeof(Node));

    if (!new_node) {
        printf("n/a\n");
        return NULL;
    }

    new_node->data = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

Node *insertNode(Node *root, int value) {
    if (root == NULL) {
        root = createNode(value);
        return root;
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

Node *searchValue(Node *root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }

    if (key < root->data) {
        return searchValue(root->left, key);
    }

    return searchValue(root->right, key);
}

Node *findMin(Node *root) {
    while (root->left != NULL) {
        root = root->left;
    }

    return root;
}

Node *deleteNode(Node *root, int key) {
    if (root == NULL) {
        return root;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        if (root->left == NULL) {
            Node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        Node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void freeNode(Node *root) {
    if (root == NULL) {
        return;
    }

    freeNode(root->right);
    freeNode(root->left);

    free(root);
}

void inOrder(Node *root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(Node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node *root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}
