// CONTINUE STATEMENT

#include<iostream>
using namespace std;

int main()
{
    int n,x ;
    cout << "Enter the number : ";
    cin >> n ;
    cout << "Not divisible by : ";
    cin >> x ;
    for (int i=1 ; i<=n ; i++)
    {
        if ( i%x == 0 )
        continue;
        // this will make it skip the rest of the steps of this current loop and new loop with i++ value starts
        else
        cout << i << " ";
    }
    

    return 0;
}