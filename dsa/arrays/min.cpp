#include <iostream>
using namespace std;
int main() {
    int a[9] = {3,2,5,6,9,1,4,7,8};

    int min = a[0];
    for (int i = 1; i < sizeof(a)/sizeof(a[0]); i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    cout<<"The minimum value is "<<min<<endl;
}