// FUNCTION DECLARATION AND DEFINITION

// Two ways to use function :
// 1) Declare, define and then use
// 2) Declare, use and then define

#include<iostream>
#include<cmath>
using namespace std;

// METHOD 1

    // int getMax( int a, int b)
    // {
    //     if ( a>b )
    //         return a;
    //     else 
    //         return b;
    // }
    // int main()
    // {
    //     int x=10 , y=20 ;
    //     cout << getMax( x,y );
    //     return 0;
    // }


// METHOD 2

    // int getMax( int a , int b );
    // int main()
    // {
    //     int x=10 , y=20 ;
    //     cout << getMax( x,y );
    //     return 0;
    // }
    // int getMax( int a , int b )
    // {
    //     if ( a>b )
    //         return a;
    //     else
    //         return b;
    // }


int main()
{
    int a=2 , b=4 ;
    cout << pow(a,b) << endl;
    double x = 100 ;
    cout << log10(x);
    return 0;

    // pow(a,b) and log10(x) are already declared functions in cmath header life
}