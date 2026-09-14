#include <iostream>
using namespace std;
int main() {
    int a[6] = {1,2,3,4,5,6};

    int target = 4;
    bool found = false;
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        if (a[i] == target) {
            found = true;
        }
    }
    if (!found) {
        cout<<"Element not found"<<endl;
    }
    else {
        cout<<"Element found"<<endl;
    }
}