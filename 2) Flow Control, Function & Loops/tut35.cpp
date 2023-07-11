// TABLES 

#include<iostream>
using namespace std; 

int main()
{
    int n,x;
    cout << "Enter n : ";
    cin >> n ;
    cout << "Enter x : ";
    cin >> x ;

    for (int i=1 ; i<=x ; i++)
    {
        cout << i*n << " ";
    }

    return 0;
}