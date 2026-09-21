#include<iostream>
using namespace std;
int main() {
    int n = 7;
    int a[7] = {12,7,9,2,20,3,8};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (a[j]>a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for (int k = 0; k < sizeof(a)/sizeof(a[0]); k++) {
        cout<<a[k]<<" ";
    }
}