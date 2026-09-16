#include<iostream>
using namespace std;
int main() {
    int a[7] = {1,2,3,4,5,6,7}; // Initialize an array
    int sum = 0; // Declare aum variable 
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        sum += a[i]; // Add array elements to sum variable 
    }
    float average = (float)sum/(sizeof(a)/sizeof(a[0])); // Calculate average 
    cout << "The average is " << average << endl;
}