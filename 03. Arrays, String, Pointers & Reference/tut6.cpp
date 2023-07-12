// CHECKING IF ARRAY IS SORTED OR NOT 

#include<iostream>
using namespace std;

bool check_arr(int arr[] , int n)
{
    for ( int i=1 ; i<n ; i++ )
    {
        if ( arr[i] < arr[i-1] )
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array : ";
    for ( int i=0 ; i<n ; i++ )
    {
        cin >> arr[i];
    }

    if ( check_arr(arr , n) == true)
        cout << "sorted";
    else
        cout << "not sorted";
    
    return 0;
    
}