// DEFAULT ARGUMENTS IN FUNCTIONS

#include<iostream>
using namespace std;

// void details (int id , string name="ravi" , string address="noida")
// {
//     cout << "Id is " << id << endl ;
//     cout << "Name is " << name << endl ;
//     cout << "Address is " << address << endl ;
// }

// int main()
// {
//     details(101 , "yash" , "sonipat");
//     cout << endl ;
//     details (102 , "rohan");
//     cout << endl ;
//     details (103);
//     return 0;
// }



// Rules of default arguments

// 1) All default arguments must appear at the end. If default argument is not at end, there will be compiler error
//    If a default argument is given then next arguments should also be default
// void print (int id , string name="ravi" , string address)
// this will give error

// 2) Default argument values can be provided either in the declaration or in definition
int sum( int a , int b , int c=0 , int d=0 )
{
    return (a+b+c+d) ;
}
int main()
{
    int w=10 , x=20 , y=30 , z ;
    cout << sum(w,x,y);
    return 0;
}