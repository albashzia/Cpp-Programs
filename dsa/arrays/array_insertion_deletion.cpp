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

void remove(int A[], int i){
    if(i<position){
        for(int j=i; j<position;j++){
            A[j]=A[j+1];
            position--;
        }
    }
}

void display(){
    for(int i = 0; i < position; i++){
        cout<<A[i]<<",";
    }
}

int main(){
    insert(A,3);
    insert(A,6);
    insert(A,12);
    insert(A,23);
    insert(A,89);
    display();
    cout<<endl;
    remove(A,3);
    display();
}