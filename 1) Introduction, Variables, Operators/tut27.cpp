// BINARY ARITHMETIC OPERATORS

#include<iostream>
using namespace std;

int main()
{
    int x=20 , y=10;
    cout << x + y << "\n";
    cout << x - y << "\n";
    cout << x * y << "\n";
    cout << x / y << "\n";
    cout << x % y << "\n";      
    // remainder operator '%' works only for floating point types
    // other operators works for both integer and floating point types
    // the sign of (a % b) is same as the sign of a
    cout << 10 % 3 << "\n";
    cout << -10 % 3 << "\n";




// URINARY ARITHMETIC OPERATORS

    // int a = 5 ;
    // int b = a++ ;
    // int c = ++a ;
    // a-- and --a are also urinary operators
    // cout << a << "\n";
    // cout << b << "\n";
    // cout << c << "\n";

    return 0;
}