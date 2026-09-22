#include <stddef.h>

class SingleLinkedList {
    struct Node {
        int a;
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
