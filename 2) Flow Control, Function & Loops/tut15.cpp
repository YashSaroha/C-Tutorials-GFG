// FUNCTION OVERLOADING

// using function overloading we can use same function name for different functions and provide different types of input parameters
// when we call the function with a particular parameter, the function with that parameter is automatically called

#include<iostream>
using namespace std;

// EXAMPLE 1

// int getMax(int a, int b)
// {
//     return (a>b)?a:b ;      // greatest of 2 nos
// }

// int getMax(int a , int b , int c)
// {
//     return getMax( getMax(a,b) , c ) ;      // greatest of 3 nos (function name same as above)
// }

// int main()
// {
//     cout << getMax(10,20) << endl;      // first function with 2 input parameter is called
//     cout << getMax(10,20,30);           // second function with 3 input parameter is called
//     return 0;
// }



// EXAMPLE 2

// void print(string s)
// {
//     cout << s << endl ;
// }
// void print(char c)
// {
//     cout << c << endl ;
// }
// void print(int n)
// {
//     cout << n << endl ;
// }

// int main()
// {
//     print("yash");
//     print(3);
//     print('r');
//     return 0;
// }



// EXAMPLE 3

void print(int x=0)
{
    cout << x << endl ;
}
void print()
{

}
int main()
{
    // print();
    // this will give an error because of default argument i.e any function can be called from the 2
    return 0;
}