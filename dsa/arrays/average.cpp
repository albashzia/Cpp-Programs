#include<iostream>
using namespace std;
int main() {
    int a[7] = {1,2,3,4,5,6,7};
    int sum = 0;
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        sum += a[i];
    }
    float average = (float)sum/(sizeof(a)/sizeof(a[0]));
    cout << "The average is " << average << endl;
}