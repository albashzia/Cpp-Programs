#include <wchar.h>

class QueueList {
    struct node {
        int data;
        node*next;
    }*front,*rear,*p,*q;

    QueueList{
        front = NULL;
        rear = NULL;
        p = NULL;
        q = NULL;
    }

    void enqueue(int x) {
        q = new node;
        q->data = x;
        if (front == NULL) {
            front = q = rear;
            q->next = NULL;
        }
        else {
            rear->next = q;
            rear = q;
            rear->next = NULL;
        }
    }
};
