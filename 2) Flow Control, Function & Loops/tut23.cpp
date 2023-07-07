// NESTED LOOP

#include<iostream>
using namespace std;

int main()
{
    int i , j ;
    cout << "Enter a number : ";
    cin >> i ;

    for (int n=1 ; n<=i ; n++)
    {
        for (j=1 ; j<=10 ; j++)
        {
            cout << n*j << " " ;
        }
        cout << endl;
        
    }
    

    return 0;
}