// PRIME FACTORIZATION

#include<iostream>
using namespace std;

int isPrime(int x)
{
    for (int a = 2; a < x; a++)
    {
        if ( x%a == 0 )
        {
            return false;
        }
    }
    return true;
}

void primeFactors(int n)
{
   for (int i = 2; i <= n; i++)
   {
        if (isPrime(i))
        {
            int x = i ;
            while (n%x==0)
            {
                cout << i << " " ;
                x = x*i ;
            }   
        }    
   }
}

int main()
{
    cout << "Enter a number : ";
    int n;
    cin >> n ;
    primeFactors(n);
    return 0;
}