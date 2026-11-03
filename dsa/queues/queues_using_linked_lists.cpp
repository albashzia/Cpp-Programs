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
};
