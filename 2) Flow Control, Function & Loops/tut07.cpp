#include<iostream>
using namespace std;

int main()
{
    int a,b,c ;
    cout << "Enter three numbers : ";
    cin >> a >> b >> c ;


    // METHOD 1
        if ( a>=b and a>=c )
            cout << "a is largest";
        else if ( b>=a and b>=c )
            cout << "b is largest";
        else
            cout << "c is largest";


    // METHOD 2
        // if ( a>b )
        //     {
        //         if ( a>c )
        //         cout << "a is largest";
        //         else
        //         cout << "c is largest";
        //     }
        // else if ( b>c )
        //     {
        //         if ( b>a )
        //         cout << "b is largest";
        //         else 
        //         cout << "a is largest";
        //     }
        // else
        //     cout << "c is largest";
    

    return 0;
}