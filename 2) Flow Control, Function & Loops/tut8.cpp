#include<iostream>
using namespace std;

int main()
{
    int op,x,y ;
    cout << "Enter the type of operation : ";
    // 1 => addition , 2 => subtraction , 3 => multiplication
    cin >> op ;
    cout << "Enter 2 numbers : ";
    cin >> x >> y ;

    switch (op)
    {
    case 1:
        cout << x+y ;
        break;
    case 2:
        cout << x-y ;
        break;
    case 3:
        cout << x*y ;
        break;
    
    default: 
        cout << "Enter valid operation";
        break;
    }

    return 0;
}