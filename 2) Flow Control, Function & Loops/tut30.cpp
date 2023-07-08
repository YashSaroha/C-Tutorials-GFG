// FACTORIAL OF A NUMBER

#include<iostream>
using namespace std;

int main()
{
    int n;
    int ans=1 ;
    cout << "Enter a number : ";
    cin >> n ;
    
    while ( n>0 )
    {
        ans = ans * n ;
        n-- ;
    }
    cout << ans;
    
    return 0;
}