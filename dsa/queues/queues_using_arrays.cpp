#include <iostream>
using namespace std;
class QueueArray {

    int max = 5;
    int front = -1;
    int rear = -1;
    int QA[5];

    void enqueue(int x) {
        if (rear == max-1) {
            cout<<"Queue is full"<<endl;
        }
        else {
            if (front == -1) {
                front = 0;
            }
            QA[++rear] = x;
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout<<"Queue is empty"<<endl;
        }
        else {
            cout<<"Deleting: "<<QA[front]<<endl;
            if (front == rear) {
                front = -1;
                rear = -1;
            }
            else {
                front++;
            }
        }
    }
};
