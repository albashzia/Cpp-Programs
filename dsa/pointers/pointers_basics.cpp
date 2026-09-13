#include <iostream>
using  namespace std;
int main() {
    int a = 112; // Creating a variable
    int *b = &a; // Assign value of a to pointer b

    cout << "a  = " << a << endl; // Prints the value stored in a
    cout << "&a = " << &a << endl; // Prints the address of variable a

    cout << "b  = " << b << endl; //prints the value of b i.e Pointer variable
    cout << "&b = " << &b << endl; // Prints where the b is stored, pointer of a pointer

    cout << "*b = " << *b << endl; // Prints the value to which the pointer b is refering to
}