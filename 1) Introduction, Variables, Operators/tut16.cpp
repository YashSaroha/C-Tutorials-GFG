// LITERALS 

// literals are constant values 


// using prefix in interger literals (case insensitive)
// no prefix <- decimal
// 0x <- hexadecimal
// 0b <- binary
// 0 <- octal

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 20;
//     int b = 0x1A;
//     int c = 016;
//     int d = 0b11;
//     cout << a << "\n";              // 20 in decimal
//     cout << b << "\n";              // 1A in hexa = 26
//     cout << c << "\n";              // 16 in octal = 14
//     cout << d << "\n";              // 11 in binary = 3
//     return 0;
// } 




// using suffix in interger literals (case insensitive)
// u <- unsigned
// l <- long
// ll <- long long
// ul <- unsigned long 
// ull <- unsigned long long

#include<iostream>
using namespace std;

int main()
{
    int a = 20;
    unsigned int b = 20u;
    long int c = 20l;
    long long int d = 20ll;
    cout << a << "\n";              
    cout << b << "\n";              
    cout << c << "\n";              
    cout << d << "\n";              
    return 0;
} 