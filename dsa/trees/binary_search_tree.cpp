#include <stdlib.h>

class BinarySearchTree {
    struct Node {
        int data;
        Node *left;
        Node *right;
    }*root;

    BinarySearchTree() {
        root = NULL;
    }
};
