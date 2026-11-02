#include <ostream>
#include <wchar.h>
#include <iostream>

class StackList {
    struct node {
        int data;
        node*next;
    }*p;

    void push(int x) {
        if (p==NULL) {
            p = new node;
            p->data = x;
            p->next = NULL;
            return;
        }
        node*t = new node;
        t->data = x;
        t->next =p;
        p = t;
    }

    void pop() {
        if (p==NULL) {
            cout<<"Stack Underflow"<<endl();
            return;
        }
        node*q=p;
        p=p->next;
        delete q;
    }
};
