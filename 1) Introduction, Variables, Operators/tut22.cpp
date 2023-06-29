// ESCAPE SEQUENCES

#include<iostream>
using namespace std;

int main()
{
    //cout << "Welcome "Yash" Saroha";
    // this will give error because we cannot use double quotes like this...to print double quotes we need \"  "\ this is escape seq
    // cout << "Welcome \"Yash\" Saroha";
    // cout << "\n";
    //  \n is also an escape sequence which causes a new line


    // cout << "Hi, \n";
    // cout << "printing \ example";
    // this will give a warning and will print without \ because \(space) is not an escape seq


    // to print with \ we need to type \\  this is an escape seq
    // cout << "printing \\ example";


    string path = "C:\\xyz\\abc.txt" ;
    cout << path;

    return 0;
}