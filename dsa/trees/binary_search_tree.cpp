#include <iostream>

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
            root->right = NULL;
            return;
        }

        if (t->data == newNode->data) {
            cout<<"Already Exists";
            return;
        }

        if (newNode->data < t->data) {
            if (t->left != NULL) {
                insertNode(t->left,newNode);
            }
            else {
                t->left = newNode;
                t->left->left = NULL;
                t->left->right = NULL;
            }
        }
        else {
            if (t->right != NULL) {
                insertNode(t->right,newNode);
            }
            else {
                t->right = newNode;
                t->right->left = NULL;
                t->right->right = NULL;
            }
        }
    }
};
