#include <stddef.h>
#include <iostream>
using namespace std;

class SingleLinkedList {
    struct Node {
        int data;
        Node * next;
    } * p;

public:
    void insertAtEnd();
    void insertAtStart();
    void display();
    void search();
    void deleteAtPosition();

    SingleLinkedList() {
        p = NULL;
    }
};

void SingleLinkedList::insertAtEnd() {
    int x;
    cout<<"Enter value to insert at end: ";
    cin>>x;
    Node *q,*t;
    if (p==NULL) {
        p = new Node;
        p->data=x;
        p->next=NULL;
    }
    else {
        q = p;
        while (q->next!=NULL) {
            q = q->next;
        }
        t = new Node;
        t->data=x;
        t->next=NULL;
        q->next=t;
    }
}