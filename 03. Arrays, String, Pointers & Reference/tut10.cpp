// HIGHEST ELEMENT OF ARRAY

#include<iostream>
using namespace std;

int main()
{
    int ans=0 ;
    int n;
    cout << "size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter array : ";
    for ( int i=0 ; i<n ; i++ )
        cin >> arr[i];

    for ( int i=0 ; i<n ; i++ )
    {

        if ( arr[i] > ans )
            ans = arr[i];
    }
    cout << ans;
    return 0;
}