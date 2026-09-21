#include <iostream>
using namespace std;
int main() {

    int n = 7;
    int a[7] = {4,5,7,8,9,12,11};
    for (int i = 0; i < n; i++) {
        bool swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j]>a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped = 1;
            }
        }
        if (swapped==0) {
            break;
        }
    }
    for (int k = 0; k < sizeof(a)/sizeof(a[0]); k++) {
        cout<<a[k]<<" ";
    }
}