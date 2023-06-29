// INPUT OUTPUT

#include<iostream>
using namespace std;

int main ()
{
    string myName;
    int x,y ;

    cout << "Enter your complete  name : " ;
    getline(cin, myName);
    cout << "Enter your marks : " << "\n" ;
    cin >> x >> y ;
    cout << "Welcome " << myName << ", your marks are " << x << " and " << y ;

    return 0;
}


// int main()
// {
//     string name;
//     cout << "Enter your name : ";
//     getline(cin , name);
//     cout << "Welcome " << name ;
//     return 0;
// }