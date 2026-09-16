#include<iostream>
using namespace std;
const int MAX_SIZE = 7;
struct ArrayList{
    int Element[MAX_SIZE];
    int position = 0;
};

void insert (ArrayList *List, int value){
    if(List->position<MAX_SIZE){
        List->Element[List->position++] = value;
    }
}

void max(ArrayList *List){
    int max = List->Element[0];
    for(int i = 0; i < List->position;i++){
        if(List->Element[i] > max ){
            max = List->Element[i];
        }
    }
    cout<<"Maximum temperature is "<<max<<endl;
}

void display(ArrayList *List){
    for(int i = 0; i < List->position;i++){
        cout<<List->Element[i]<<" ";
    }
}

int main() {
    ArrayList A, B;

    insert(&A, 33);
    insert(&A, 35);
    insert(&A, 29);
    insert(&A, 31);
    insert(&A, 34);
    insert(&A, 30);
    insert(&A, 31);

    display(&A);
    cout<<endl;
    max(&A);

    return 0;
}