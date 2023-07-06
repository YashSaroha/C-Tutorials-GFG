// PRACTICE PROBLEMS

#include<iostream>
using namespace std;


// PROBLEM 1

// void fun()
// {
//     static int x = 1;
//     int y = 1 ;
//     x++ ;
//     y++ ;
//     cout << x << " " << y << endl;
// }
// int main()
// {
//     fun();
//     fun();
//     fun();
//     return 0;
//     // static x = 1 is executed only once and will be ignored in the rest of the calls..this is the use of static so x=1 only in the first case
// }




// PROBLEM 2

// void fun(int x , int y , int z)
// {
//     cout << x << " " << y << " " << z ;
// }
// int main()
// {
//     int i=3 ;
//     fun( ++i , ++i , ++i ) ;
//     return 0;
//     // this is compiler dependent..how compiler evaluates the function can be different so such codes are not recommended
// }



// PROBLEM 3

// void fun(int x)
// {
//     if (x==0)
//         return ;
//     else
//     {   cout << "yash" << endl ;
//         fun(x-1);
//     }
// }
// int main()
// {
//     fun(3);
//     return 0;
//     // this is a recursive function and it will call itself 3 times till x becomes 0
// }




// PROBLEM 4

// int main()
// {
//     cout << "hello\n" ;
//     main();
//     // this will go in infinite loop and print hello 
// }