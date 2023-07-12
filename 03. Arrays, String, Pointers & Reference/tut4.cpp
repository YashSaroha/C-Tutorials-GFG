// ARRAY TRAVERSAL 


#include<iostream>
using namespace std;

int main()
{

// 1) USING NORMAL FOR LOOP


    // int arr[] = {1,2,3,4,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for (int i=0 ; i<n ; i++)
    //     cout << arr[i] << " ";
    

// 2) USING RANGE BASED LOOP


    // int arr[] = {1,2,3,4,5};
    // for ( int x : arr )        // value of each element is assigned to x and it is printed
    //     cout << x << " ";



// ARRAY MODIFICATION USING NORMAL LOOP

    // int arr[] = {10,20,30};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for ( int i=0 ; i<n ; i++ )
    // {
    //     arr[i] = arr[i] * 2 ;
    //     cout << arr[i] << " " ;
    // }

// ARRAY MODIFICATION USING RANGED LOOP
    
    int arr[] = {10,20,30};
    for ( int &x : arr )
        x = x * 2 ;
    for ( int x : arr )
        cout << x << " " ;

    return 0;
}