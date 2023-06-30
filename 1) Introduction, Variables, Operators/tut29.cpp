// COMPARISON OPERATORS

// < , > , == , <= , >= , != , <=>

#include<iostream>
using namespace std;

int main()
{
    int x = 2 , y = 4;

    cout << (x < y) << "\n";
    cout << (x > y) << "\n";
    cout << (x == y) << "\n";
    cout << (x <= y) << "\n";
    cout << (x >= y) << "\n";
    cout << (x != y) << "\n";

    // auto result = x<=>y ;
    // if (result < 0)
    //     cout << "x is less than y";
    // else if (result > 0)
    //     cout << "x is more than y" ;
    // else
    //     cout << "x = y" ;

    return 0;
}