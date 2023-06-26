// CONST VARIABLE

#include<iostream>
using namespace std;

// int main ()
// {
//     const int x=4;
//     // x=x+1;       // const variable cannot be modified
//     cout << x;
//     return 0;
// }


int main()
{
    const double PI = 3.14 ;
    int r;
    cout << "Enter radius = ";
    cin >> r ;
    cout << "Value of area is " << PI*r*r ;
    return 0;
}