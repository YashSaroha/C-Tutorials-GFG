// GREATEST COMMON DIVISOR OF 2 NUMBERS

#include<iostream>
using namespace std;
int main()
{
    int a,b ;
    cout << "Enter 2 numbers : \n";
    cin >> a >> b ;
    
    cout << "Divisors of first number are : ";
    for (int i=1 ; i<=a ; i++)
    {
        if ( a%i == 0 )
        {
            cout << i << " ";
        }
    }

    cout << "\nDivisors of second number are : ";
    for (int i=1 ; i<=b ; i++)
    {
        if ( b%i == 0 )
        {
            cout << i << " ";
        }
    }

    int x = min(a,b) ;
    int ans;
        for (int i=1 ; i<=x ; i++)
        {
            if ( a%i == 0 && b%i == 0)
                ans = i ;
        }
        cout << "\nGCD is " << ans;
    
    return 0;
}