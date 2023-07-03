// How function works

#include<iostream>
using namespace std;

void fun2 ()
{
    cout << "Inside fun2() \n";
}

void fun1 ()
{
    cout << "Before fun1() \n";
    fun2();
    cout << "After fun1() \n";
}

int main()
{
    cout << "This is before main \n";
    fun1();
    cout << "This is after main \n";
    return 0;
}