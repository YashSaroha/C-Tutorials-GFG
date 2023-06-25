#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    // int x = 33;
    // int last = x%10 ;
    // cout << last << endl ;

    // int y = -45;
    // int res = abs(y)%10 ;
    // cout << res << endl ;

    int a,b ;
    cout << "Enter the number : " ;
    cin >> a  ;
    cout << "last digit is : " << abs(a) % 10 ;
    return 0;
}