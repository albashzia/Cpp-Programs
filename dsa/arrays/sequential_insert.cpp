#include<iostream>

using namespace std;

const int MAX_SIZE = 10;
int A[MAX_SIZE];
int position = 0;

void insert(int A[], int value){
    if(position<MAX_SIZE){
        A[position++]= value;
    }
}

void display(){
    for(int i = 0; i < MAX_SIZE; i++){
        cout<<A[i]<<",";
    }
}
int main(){
    insert(A,3);
    insert(A,6);
    insert(A,12);
    display();
}