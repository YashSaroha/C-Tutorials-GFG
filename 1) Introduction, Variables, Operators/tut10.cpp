#include<iostream>
using namespace std;

int main()
{
// sizeof return the no of bytes required for the operator...also used for literals and variables
    cout << sizeof(int) << "\n";
    cout << sizeof(char) << "\n";
    cout << sizeof(float) << "\n";
    cout << sizeof(double) << "\n";
    cout << sizeof(bool) << "\n";

    int x=5;
    // cout << sizeof(x) << "\n";
    // cout << sizeof(x++) << "\n";
    // cout << x << sizeof(x);
    // cout << sizeof(long long) << "\n";
    // cout << sizeof(10) << "\n";                     // this is int so size 4
    // cout << sizeof(10ll) << "\n";                   // this is long long so size 8
    // cout << sizeof(10.5) << "\n";                   // this is considered as double so size 8
    // cout << sizeof(10.5f) << "\n";                  // this is float so size 4
   return 0; 
}
