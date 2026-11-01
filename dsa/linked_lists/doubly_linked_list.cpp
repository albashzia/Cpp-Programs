#include <wchar.h>

class DoublyLinkedList {

    struct Node {
        int data;
        Node * prev;
        Node * next;
    }*p;

    DoublyLinkedList() {
        p = NULL;
    }

    void insertAtFirst(int);
};

void DoublyLinkedList::insertAtFirst(int v) {

    Node*t = new Node;
    t->data = v;
    t->prev = NULL;
    t->next = NULL;

    if (p == NULL) {
        p = t;
        return;
    }

    Node*q = p;
    p = t;
    p->next = q;
    q->prev = p;

}
