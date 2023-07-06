// INLINE FUNCTION

#include<iostream>
using namespace std;

inline int getMax(int x , int y)
{
    if(x>y)
    return x;
    else
    return y;
}

int main()
{
    cout << getMax(10,20) ;
    return 0;
}