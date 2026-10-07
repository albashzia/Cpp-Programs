#include <wchar.h>

class CircularList {

    struct Node {
        int data;
        Node * next;
    }*p;

public:
    void insertAtFirst(int);
    void insertAtLast(int);
    void insertAtPosition(int,int);
    void display();

    CircularList() {
        p=NULL;
    }
};

void CircularList::insertAtFirst(int v) {
    Node *t;
    t = new Node;
    t->data = v;
    t->next = NULL;
    if (p==NULL) {
        p = t;
        t->next = p;
    }
    else {
        t->next = p->next;
        p->next = t;
    }
}

void CircularList::insertAtLast(int v) {
    Node *t;
    t = new Node;
    t->data = v;
    if (p==NULL) {
        p = t;
        t->next = p;
    }
    else {
        t->next = p->next;
        p->next = t;
        p = t;
    }
}
