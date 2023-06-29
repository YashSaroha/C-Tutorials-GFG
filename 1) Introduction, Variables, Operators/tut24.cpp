//    FLOATING POINT - DEFAULT PRINT FORMAT



//    RULES

// 1) No trailing zeros
// 2) Precision means total digits (excluding the digits used after e)
// 3) Default precision value is 6
// 4) When value before the decimal point does not fit in 6 digits, power format is used

#include<iostream>
using namespace std;

int main()
{
    double x = 1.2300 ;
    cout << x << "\n" ;
    // 1.23  (no trailing zeros)

    double y = 1356.8670 ;
    cout << y << "\n" ;
    // 1356.87  (rounded off to 6 digits)

    double z = 3412567.65789 ;
    cout << z << "\n" ;
    // 3.41257e+6  (more than 6 digits before decimal so converted in power format)

    double a = 123456.89 ;
    cout << a << "\n" ;
    // 123457  (exact 6 digits before decimal..normal rounding off)

    double b = 123e+2 ;
    cout << b << "\n" ;
    // 12300  (normally written as total digits are less than 6)

    return 0;
}