// AUTO keyword
// used for variable declaration...no need to type the datatype of variable, it will automatically infer datatype for variable

#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
    auto a = 3;
    auto b = 4.14;
    cout << a << "\n";
    cout << b << "\n";
    cout << typeid(a).name() << "\n";
    cout << typeid(b).name();
    return 0;
}

// typeid(variable) gives the info of the datatype of that variable and .name() gives the initial of that datatype
// here a was interger (i) and b was double (d)
// auto is used for lambda expressions where a programmer don't know the datatype, only compiler knows