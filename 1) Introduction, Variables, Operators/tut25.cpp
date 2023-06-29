// FLOATING POINT - MANIPULATION



// setprecision(n) => changes the default precision
// showpoint       => shows trailing zeros
// noshowpoint     => removes trailing zeros
// showpos         => shows a +ve sign
// noshowpos       => removes + sign
// uppercase       => changes to uppercase
// nouppercase     => back to normal case


#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double x=15.5683 , y=34267.1 , z=1.23 ;
    cout << std::setprecision(4) ;
    cout << x << "\n" ;
    cout << y << "\n" ;
    // default precision value changed to 4

    cout << std::showpoint << z << "\n" ;
    cout << std::showpos << z << "\n" ;
    cout << std::uppercase << y << "\n" ;

    return 0;
}