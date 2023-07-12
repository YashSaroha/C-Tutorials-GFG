#include<iostream>
using namespace std;

int main()
{
    int arr[4];                     // declaring
    // int arr[] = [1,2,3,4];      // declaring and defining

    // int n=5;
    // int arr[n];

    // int arr[5] = {1,2};         // the remaining 3 elements will be considered as 0
    // cout << arr[1];  

    // int arr[5] = {0};              // all 5 elements become 0...only works for 0, not other no.
    // int arr[5] = {3};              // this will give error

    // int arr[2] = {1,2,3,4};           // error because size of array is declared less

    // INITIALIZER LIST INITIALIZATION
    int arr1[] {1,2};
    int arr2[5] {1,2,3,4,5};
    int arr3[5] {20,30};                 // similar to int x{10} = int x = 10

    return 0;
}