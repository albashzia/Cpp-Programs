#include<iostream>
using namespace std;

void swap(int A[], int i, int j){
    int t = A[i];
    A[i] = A[j];
    A[j] = t;
}

void display(int A[], int size){
    for(int i = 0; i < size; i++){
        cout<<A[i]<<",";
    }
}

int main(){
    int A[7] = {1,2,3,4,5,6,7};
    display(A,7);
    cout<<endl;
    swap(A,2,4);
    display(A,7);
}