// ASSIGNMENT OPERATORS

// simple assignment operator is =
// compound assignment operators += , -= , /= , *= , &= , |= , <<= ,  >>= , ^= 

#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = x;
    
    cout << y << "\n";
    x += 10 ;
    cout << x << "\n";
    x -= 10 ;
    cout << x << "\n";
    x *= 10 ;
    cout << x << "\n";

    return 0;
}