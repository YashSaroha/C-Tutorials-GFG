// BITWISE OPERATORS (PART 1)

// 1) Bitwise AND (&)
// 2) Bitwise OR (|)
// 3) Bitwise XOR (^)

#include<iostream>
using namespace std;

int main()
{
    int x=3 , y=6 ;
    cout << (x & y) << endl ;
    cout << (x | y) << endl ;
    cout << (x ^ y) << endl ;

    return 0;
}

// x = 3 => 011
// y = 6 => 110
// AND   => 010 => 2, similarily OR and XOR