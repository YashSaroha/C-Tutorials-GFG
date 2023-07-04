#include<iostream>
using namespace std;

int main()
{
    int x ;
    cout << "Enter a number : ";
    cin >> x ;

    if ( x > 0 )
        {
            cout << "Positive ";
            if ( x % 2 == 0 )
                cout << "even";
            else
                cout << "odd";
        }
    
    else if ( x < 0 )
        {
            cout << "Negative ";
            if ( x % 2 == 0 )
                cout << "even";
            else
                cout << "odd";
        }

    else
        cout << "zero";

    return 0;
}