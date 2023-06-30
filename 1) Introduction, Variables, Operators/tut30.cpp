// LOGICAL OPERATORS

// and , &&
// or , ||
// not , !

#include<iostream>
using namespace std;

int main ()
{
    // int x=10 , y=20;
    // bool result;
    // result = (x>0 && x<100);    // (x>0 and x<100) will also work
    // cout << result << "\n";

    // result = x>0 || x>y ;       // (x>0 or x>y) will also work
    // cout << result << "\n";

    // result = !result;           // (result = not result) will also work
    // cout << result << "\n";




    // SHORT CIRCUITING IN LOGICAL OPERATORS


    // in AND, if first condition is false then second is not evaluated. If true then seconds need to be checked
    // in OR, if first condition is true then second condition is not evaluated. If first if false then second needs to be checked

    int a = 5;
    bool res = a>10 && a++ ;
    // bool res = a>4 && a++ ;
    // bool res = a>10 || a++ ;
    // bool res = a==5 || a++ ;
    cout << res << "\n";
    cout << a;
    // a++ will be true because it is a value greater than 0

    return 0;
}