// SIZE OF AN ARRAY

#include<iostream>
using namespace std;

int main()
{
    // int arr[] = {1,2,3,4,5};
    // int n = sizeof(arr);
    // cout << n;
    // This will give size = 20 as integer takes 4 bits and there are 5 values in array


    // To count the no of elements in an array
    // int arr[] = {1,2,4,5,8};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout << n;
    // dividing total size (20) by the size of any element (4)


    int arr[5] = {1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << n;
    return 0;
}