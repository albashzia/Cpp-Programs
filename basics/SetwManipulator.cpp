#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int a = 2, b = 4,c = 6;
    cout<<setw(8)<<"Number"<<setw(20)<<"Square"<<endl<<
        setw(8)<<a<<setw(20)<<a*a<<endl<<
            setw(8)<<b<<setw(20)<<b*b<<endl<<
                setw(8)<<c<<setw(20)<<c*c<<endl;

}
