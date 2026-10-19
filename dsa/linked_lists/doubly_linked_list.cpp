#include <wchar.h>

class DoublyLinkedList {

    struct node {
        int data;
        node * prev;
        node * next;
    }*p;

    DoublyLinkedList() {
        prev = NULL;
        next = NULL;
        p = NULL;
    }
};
