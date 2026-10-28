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

    void insertNode(Node*t, Node*newNode) {
        if (root == NULL) {
            root = new Node;
            root->data = newNode->data;
            root->left = NULL;

        }
        else {
            Node *q;
            q = new Node;

        }
    }
};
