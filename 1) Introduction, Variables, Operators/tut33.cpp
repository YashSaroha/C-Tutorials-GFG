// BITWISE OPERATORS (PART 2)

// LEFT AND RIGHT SHIFT OPERATORS : takes 2 parameters
    // 1. number whose binary representation need to be shifted and 
    // 2. number which tells how many times this binary representation need to be shifted
// BITWISE NOT OPERATOR

#include<iostream>
using namespace std;

int main()
{
    // LEFT SHIFT OPERATOR (<<)


    int x = 3;
    cout << (x << 1) << endl ;
    // 3 = 00..011(32 bits) -> 00..110(6)    shifting bits left by 1
    cout << (x << 2) << endl ;
    // 3 = 00..011(32 bits) -> 00..1100(12)   shifting bits left by 2
    int y = 4;
    int z = (x << y);       // shifting left by 4
    cout << z << endl ;

    // if we assume that leading y bits are 0 then result of x << y is equal to x*2(power y)
    // example x=3 , x<<1 means 3*2(1) = 6
    // example x=3 , x<<2 means 3*2(2) = 12



    // RIGHT SHIFT OPERATOR (>>)
    int a = 33;
    cout << (a >> 1) << endl ;
    // 33 = 00..100001(32 bits) -> 00..10000(16)   shifting bits right by 1
    cout << (a >> 2) << endl ;
    // 3 = 00..100001(32 bits) -> 00..1000(8)   shifting bits right by 2
    int b = 4;
    int c = (a >> b);       // shifting right by 4
    cout << c << endl ;

    // right shift operator is equal to {x/2(power y)} ki lower value
    // example a=33 , a>>1 means 33/2(1) = 16.5 ki lower value = 16
    // example a=33 , a>>2 means 33/2(2) = 8.25 ki lower value = 8




    // BITWISE NOT OPERATOR (~)
    // compliments all the bits of the binary representation
    return 0;

}