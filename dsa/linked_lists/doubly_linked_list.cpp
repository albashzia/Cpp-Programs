#include <wchar.h>
#include <iostream>

using namespace std;

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
    void insertAtLast(int);
    void display();
    void deleteFirst();
    void deleteLast();
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

void DoublyLinkedList::insertAtLast(int v) {
    Node*t = new Node;
    t->data = v;
    t->next = NULL;
    t->prev = NULL;

    if (p == NULL) {
        p = t;
        return;
    }

    Node*q = p;
    while (q->next != NULL) {
        q = q->next;
    }
    q->next = t;
    t->prev = q;
}

void DoublyLinkedList::display() {
    if (p==NULL) {
        cout<<"List is empty"<<endl;
        return;
    }
    Node*q = p;
    while (q != NULL) {
        cout<<q->data<<"->";
        q = q->next;
    }
    cout<<"END"<<endl;
}

void DoublyLinkedList::deleteFirst() {
    if (p == NULL) {
        cout<<"List is empty."<<endl;
        return;
    }

    Node*q = p;

    if (p->next == NULL) {
        p = NULL;
        delete q;
        return;
    }

    p = p->next;
    p->prev = NULL;
    delete q;

}

void DoublyLinkedList::deleteLast() {
    if (p == NULL) {
        cout<<"List is empty."<<endl;
        return;
    }

    Node*q = p;

    if (p->next == NULL) {
        p = NULL;
        delete q;
        return;
    }

    while (q->next != NULL) {
        q = q->next;
    }

    q->prev->next = NULL;
    delete q;
}
