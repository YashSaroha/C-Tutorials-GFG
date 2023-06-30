// FLOATING POINT - FIXED AND SCIENTIFIC

// by default, the flag used is std::defaultfloat
// here we will see fixed and scientific flag

// RULES
// 1) In fixed, no power format is used whereas in scientific, power format is used
// 2) In both, precision means digits after the decimal point
// 3) If there are not enough digits after decimal (i.e 6 digits) then trailing zeros are shown
// 4) We can set back to default by std::defaultfloat


#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double x=1.23 , y=1122456.453 , z=1.2e+7 ;

    cout << "Fixed format - \n";
    cout << std::fixed ;
    cout << x << "\n" ;
    cout << y << "\n";
    cout << z << "\n" ;
    cout << setprecision(2) ;
    cout << x << "\n" ;
    cout << y << "\n" ;
    cout << z << "\n" ;

    cout << "Scientific format - \n";
    cout << std::scientific ;
    cout << x << "\n" ;
    cout << y << "\n";
    cout << z << "\n" ;
    cout << setprecision(2) ;
    cout << x << "\n" ;
    cout << y << "\n" ;
    cout << z << "\n" ;


    return 0;
}