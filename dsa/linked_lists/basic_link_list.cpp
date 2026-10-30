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
    void deleteLast();
    void deleteFirst();

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
        cout<<q->data<<"->";
        q = q->next;
    }
    cout<<"END";
    cout<<endl;
}

//Method to search an element from the list
void SingleLinkedList::search() {
    int pos = 0, x;
    cout<<"Enter number to search: ";
    cin>>x;
    Node *q = p;
    if (p==NULL) {
        cout<<"List is empty"<<endl;
        return;
    }
    while (q!=NULL) {
        if (q->data==x) {
            cout<<"Found at position: "<<pos+1<<endl;
            return;
        }
        pos++;
        q = q->next;
    }
    cout<<"Element " <<x<<" not found on any node in the list"<<endl;
}

//Method to delete an element from a specified position
void SingleLinkedList::deleteAtPosition() {
    int pos, i, counter = 0;
    if(p==NULL){
        cout<<"Empty"<<endl;
        return;
    }
    cout<<"Enter position to delete from: ";
    cin>>pos;
    Node*q,*t;
    q = p;
    if(pos==1){
        p=q->next;
        delete q;
    }
    else{
        while(q!=NULL){
            q = q->next;
            counter++;
        }
        if(pos>0 && pos<=counter){
            q=p;
            for(i=0;i<pos;i++){
                t=q;
                q=q->next;
            }
            t->next=q->next;
            delete q;
        }
        else{
            cout<<"Position out of range"<<endl;
            return;
        }
    }
    cout<<"Element Deleted"<<endl;
}

//Method to delete last element from the singly linked list
void SingleLinkedList::deleteLast() {

    //Node declaration
    Node *q,*r;

    //Check if the list exists or not
    if (p==NULL) {
        cout<<"List is empty";
        return;
    }

    //Check if there is only one node in the linked list
    if (p->next==NULL) {
        q = p;
        delete q;
        p=NULL;
        return;
    }

    //Temporary pointers
    r = p;
    q = p;

    //Loop over the list until the last node is reached
    while (q->next!=NULL) {
        r = q;
        q = q->next;
    }
    //Assigning NULL to the 2nd last node
    r->next=NULL;

    //Delete the last node
    delete q;
}

//Method to delete the first element from the linked list
void SingleLinkedList::deleteFirst (){
    Node*q;
    if(p==NULL){
        cout<<"List is empty"<<endl;
    }
    if (p->next==NULL) {
        q = p;
        p = NULL;
        delete q;
    }
    else{
        q=p;
        p=p->next;
        delete q;
    }
}

int main() {
    SingleLinkedList sll;
    sll.insertAtStart();
    sll.insertAtStart();
    sll.insertAtStart();
    sll.display();
    sll.insertAtEnd();
    sll.insertAtEnd();
    sll.insertAtEnd();
    sll.display();
    sll.search();
    sll.deleteAtPosition();
    sll.display();
    sll.deleteLast();
    sll.display();
    sll.deleteFirst();
    sll.display();
}