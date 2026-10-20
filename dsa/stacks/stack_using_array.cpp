#include<iostream>
using namespace std;

const int MAX_SIZE = 7;
class Stack{
    int arr[MAX_SIZE];
    int top;

    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top>=MAX_SIZE) {
            cout<<"Stack is full"<<endl;
        }
        else {
            arr[++top]=x;
        }
    }

    void pop(){
        if(top<0){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<arr[top--]<<endl;
        }
    }
};