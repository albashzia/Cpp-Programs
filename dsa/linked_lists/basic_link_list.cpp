#include <stddef.h>
#include <iostream>
using namespace std;

//Define a class
class SingleLinkedList {
    //Create a structure called Node for Linked List
    struct Node {
        int data; //Data element of the Node
        Node * next; //Next node address inside the Node
    } * p; //Head pointer of the first node

    //Function prototypes
public:
    void insertAtEnd();
    void insertAtStart();
    void display();
    void search();
    void deleteAtPosition();

    //Non-parameterized constructor
    SingleLinkedList() {
        p = NULL; //Initialise the head node as NULL initially
    }
};

//Function definition to insert at end
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

//Method definition to insert at start
void SingleLinkedList::insertAtStart() {
    int x;
    cout<<"Enter data to insert at start: ";
    cin>>x;
    Node *q,*t;
    t = new Node;
    t->data = x;
    t->next = NULL;

    if (p==NULL) {
        p=t;
        return;
    }

    q = p;
    p = t;
    p->next=q;
}

//Method definition to display the elements of the list
void SingleLinkedList::display() {
    Node *q = p;
    if (p==NULL) {
        cout<<"List is empty";
        return;
    }
    while (q!=NULL) {
        cout<<q->data<<endl;
        q = q->next;
    }
    cout<<endl;
}

//Method to search an element from the list
void SingleLinkedList::search() {
    int pos = 0, x;
    cout<<"Enter number to search: ";
    cin>>x;
    Node *q = p;
    if (p==NULL) {
        cout<<"List is empty";
        return;
    }
    while (q!=NULL) {
        if (q->data==x) {
            cout<<"Found at position: "<<pos+1;
            return;
        }
        pos++;
        q = q->next;
    }
    cout<<endl;
}

//Method to delete an element from a specified position
void SingleLinkedList::deleteAtPosition() {
    int pos, i, counter = 0;
    if(p==NULL){
        cout<<"Empty";
        return;
    }
    cout<<"Enter position to delete from: ";
    cin>>pos;
    node*s,*q;
    s = p;
    if(pos==1){
        p=s->next;
        delete s;
    }
    else{
        while(s!=NULL){
            s = s->next;
            counter++;
        }
        if(pos>0 && pos<=counter){
            s=p;
            for(i=0;i<pos;i++){
                q=s;
                s=s->next;
            }
            q->next=s->next;
            delete s;
        }
        else{
            cout<<"Position out of range";
            return;
        }
    }
    cout<<"Element Deleted"<<endl;
}