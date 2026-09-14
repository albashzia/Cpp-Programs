#include <iostream>
using namespace std;
int main() {
    int a[5] = {1,2,3,4,5};
    int sum = 0;
    for (int i = 0; i < sizeof(a)/sizeof(a[0]);i++) {
        sum += a[i];
    }
    cout<<"Sum of array elements: "<<sum<<endl;
}