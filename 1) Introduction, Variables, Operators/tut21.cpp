// BUFFERING

#include<iostream>
using namespace std;

int main()
{
    int x,y ;
    cout << "Enter first interger : \n";
    cin >> x;
    cout << "Enter second integer : \n";
    cin >> y;
    cout << "Multiplication is " << x*y ;
    return 0;
}

// we can give input as follows

// METHOD 1
// Enter first interger : 
// 10
// Enter second integer :
// 20
// Multiplication is 200


// METHOD 2
// Enter first integer :
// 10 20 (press enter)
// Enter second integer :
// Multiplication is 200
// this is the example of buffer...the value 20 is stored in the buffer and is assigned to y