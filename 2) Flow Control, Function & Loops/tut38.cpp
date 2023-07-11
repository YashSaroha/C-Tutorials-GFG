// NEXT PRIME NUMBER 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n ;
    cout << "Next prime number is ";

    for( int i=n+1 ; ; i++ )
    {
        for( int x=2 ; x<i ; x++ )
        {
            if ( i%x == 0 )
            break;  
            else if ( i%x == 1 )
            {
                cout << i;
                return 0;
            }
        }
    }
    
    return 0;
}