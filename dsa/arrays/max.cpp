#include <iostream>
using namespace std;
int main() {
    int a[8] = {4,5,64,7,8,12,89,45};
    int max = a[0];
    for (int i = 1; i < sizeof(a)/sizeof(a[0]); i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    cout<<"The maximum value inside array is "<<max<<endl;
}