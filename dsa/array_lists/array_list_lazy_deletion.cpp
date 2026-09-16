#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

struct ArrayList {
    int Element[MAX_SIZE];
    int position = 0;
};

void insert(ArrayList *List, int value) {
    if (List->position < MAX_SIZE) {
        List->Element[List->position++] = value;
    }
}

void remove(ArrayList *List, int index) {
    if (index < List->position) {
        List->Element[index] = -9999;
    }
}

void display(ArrayList *List) {
    for (int i = 0; i < List->position; i++) {
        if (List->Element[i] != -9999) {
            cout << List->Element[i] << " ";
        }
    }
}

int main() {
    ArrayList A, B;

    insert(&A, 3);
    insert(&A, 5);

    insert(&B, 5);
    insert(&B, 8);

    display(&A);
    cout << endl;
    remove(&A,1);
    
    display(&A);
    cout<<endl;
    display(&B);
    cout << endl;

    return 0;
}