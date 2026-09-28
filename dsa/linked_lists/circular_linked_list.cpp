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
