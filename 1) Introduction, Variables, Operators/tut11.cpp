// Global and local variables and scope

// global variables are declared outside the main function and can be accessed from anywhere



// LOCAL VARIABLE
#include<iostream>
using namespace std;
int main()
{
    int x;              // if we don't initialize the local variable value then it will give undefined output
    cout << x;
    return 0;
}



// GLOBAL VARIABLE
// #include<iostream>
// using namespace std;
// int x = 4 ;                    // if we don't initialize the global variable value then it will give 0 as default output
// int main ()
// {
//     cout << x;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// extern int x ;                    // if we don't initialize the global variable value before main then it will give error
// int main ()                      // we can write extern keyword that means external linkage i.e x will be below the function
// {
//     cout << x;
//     return 0;
// }
// int x = 10;




// if we have same local and global variable then the local variable will be accessed first
// #include<iostream>
// using namespace std;
// int x = 4 ;                    // if we don't initialize the global variable value then it will give 0 as default output
// int main ()
// {
//     int x = 5;
//     cout << x;
//     return 0;
// }



// outer scope variables are accessible by inner scope but viceversa is not true
// scopes can be created by using a pair of {}