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
    void deleteFirst();
    void deleteLast();

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

void CircularList::display() {
    if (p==NULL) {
         cout<<"List is empty"<<endl;
         return;
     }
    if (p->next == p) {
        cout<<p->data<<"-> END"<<endl;
        return;
    }
    Node *q = p->next;
    while (q != p) {
        cout<<q->data<<"->";
        q = q->next;
    }
    cout<<q->data<<"->END"<<endl;
}

void CircularList::deleteFirst() {
    if (p==NULL) {
        cout<<"Empty"<<endl;
        return;
    }
    if (p->next==p) {
        Node*q = p;
        delete q;
        p = NULL;
        return;
    }
    Node*q = p->next;
    p->next = q->next;
    delete q;
}

void CircularList::deleteLast() {
    if (p==NULL) {
        cout<<"Empty"<<endl;
        return;
    }
    if (p->next == p) {
        Node*q = p;
        p = NULL;
        delete q;
        return;
    }
    Node*q,*t = p;
    q = p->next;
    while (q->next!=p) {
        q = q->next;
    }
    q->next = p->next;
    p = q;
    delete t;
}

int main() {
    CircularList cll;
    cll.insertAtLast(3);
    cll.insertAtLast(4);
    cll.insertAtFirst(2);
    cll.insertAtLast(5);
    cll.insertAtFirst(1);
    cll.insertAtPosition(1,0);
    cll.insertAtLast(6);
    cll.display();
    cll.deleteFirst();
    cll.display();
    cll.deleteLast();
    cll.display();
}