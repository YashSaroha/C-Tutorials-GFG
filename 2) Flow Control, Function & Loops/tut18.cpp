// FIRST DIGIT OF A NUMBER

#include<iostream>
using namespace std;

int firstDigit(int n)
{
    while (n>10)
    {
        n = n / 10 ;
    }
    return n;
}

int main()
{
    cout << "Enter a number : ";
    int n;
    cin >> n ;
    cout << firstDigit(n);
    return 0;
}