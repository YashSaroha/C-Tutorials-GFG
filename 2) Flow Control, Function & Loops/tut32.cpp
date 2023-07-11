// LCM OF 2 NUMBERS

#include<iostream>
using namespace std;

int main()
{
    int a,b ;
    cout << "Enter 2 numbers : ";
    cin >> a >> b ;

    int x = max(a,b);   // starting point of iteration
    int y = a*b ;       // ending point of iteration
    int ans = x;
    cout << "LCM is : ";
    for (int i=x ; i<=y ; i++)
    {
        if ( i%a == 0 && i%b == 0 )
        {    
            ans = i ;
            break;
        }
    }
    cout << ans ;
    
    return 0;
}