#include <wchar.h>
#include <iostream>

using namespace std;

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

void CircularList::insertAtPosition(int pos, int v) {

    if (pos<=0) {
        cout<<"Invalid point of insertion"<<endl;
        return;
    }

    if (p==NULL) {
        if (pos==1) {
            Node*t = new Node;
            t->data = v;
            p = t;
            t->next = p;
            return;
        }
        cout<<"List is empty"<<endl;
        return;
    }

    Node*t,*s;
    s = p->next;

    if (pos==1) {
        t = new Node;
        t->data = v;
        t->next = p->next;
        p->next = t;
        return;
    }

    for (int i = 1; i < pos-1; i++) {
        s = s->next;
        if (s==p->next) {
            cout<<"Less No of nodes"<<endl;
            return;
        }
    }

    t = new Node;
    t->data = v;
    t->next = s->next;
    s->next = t;

    if (s==p) {
        p = t;
    }
}