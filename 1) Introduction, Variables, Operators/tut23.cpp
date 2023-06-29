// IO MANIPULATION

#include<iostream>
#include<iomanip>
using namespace std;


int main()
{

                        // MANIPULATION IN BOOLEAN VALUES

    // boolalpha and noboolalpha are flags that are used to change the output behaviour of boolean values
    // boolaplha will make 1,0 -> true and false for rest of the program
    // to make it back to 1 and 0 we write noboolalpha
//     bool a = true;
//     cout << a << "\n";
//     cout << std::boolalpha ;
//     cout << a << "\n";
//     cout << std::noboolalpha ;
//     cout << a << "\n";





                        // MANIPULATION IN INTEGER VALUES...PART 1

    // hex flag will change the integer values into hexadecimal format
    // oct flag => octal format
    // dec flag => decimal format
//     int x = 26, y = 20;
//     cout << x << " " << y << "\n";
//     cout << std::hex ;
//     cout << x << " " << y << "\n";
//     cout << std::oct ;
//     cout << x << " " << y << "\n";
//     cout << std::dec ;
//     cout << x << " " << y << "\n";





                        // MANIPULATION IN INTEGER VALUES...PART 2

//     showbase will prefix the base of the specified number system......similarly noshowbase
//     showpos will prefix a +ve sign......similarly noshowpos
//     uppercase will transform letters into uppercase......similarly nouppercase
//     int x = 26 ;
//     cout << std::showbase ;     
//     cout << std::hex ;
//     cout << x << "\n";
//     cout << std::oct ;
//     cout << x << "\n";

//     cout << std::showpos ;      
//     cout << std::hex ;
//     cout << x << "\n";
//     cout << std::oct ;
//     cout << x << "\n";
    
//     cout << std::uppercase ;    
//     cout << std::hex ;
//     cout << x << "\n";
//     cout << std::oct ;
//     cout << x << "\n";





//                          FORMATING MANIPULATION OF OUTPUT

//     for these to use, we need to write   #include<iomanip>  on the top
//     setw(n)    =>  set the width
//     setfill(c) =>  set the character to fill the width
//     std::left  =>  left align
//     std::right =>  right align

    int a = 13;
    cout << std::setw(5);
    cout << std::setfill('*');
    cout << a << "\n";

//     by default, setfill uses space to fill the width 
//     if the number is more than the width then no space or character would be printed
//     setw() will be set only once and we need to write it again to use it further, other flags remain set forever once written

    cout << std::setw(8);
    cout << "Hi\n";

//     setfill, left and right flag will make sense only when setw is used

    cout << std::setw(5);
    cout << std::left ;
    cout << a << "\n";
    cout << std::setw(5);
    cout << std::right ;
    cout << a << "\n" ;

    return 0;
}