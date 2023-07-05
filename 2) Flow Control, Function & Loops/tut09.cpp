// for a leap year, conditions are :
// 1) should be divisible by 4 and not with 100 (checks for normal years)
// 2) should be divisible by 400 (checks for century years like 2300, 2400)

#include<iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year : ";
    cin >> year ;

    if (year%4 == 0 && year%100 != 0)
        cout << "leap year";
    else if (year%400 == 0)
        cout << "leap year";
    else
        cout << "not a leap year";

    return 0;
}