// COUNT DISTINCT ELEMENTS

#include <iostream>
using namespace std;
int count_distinct(int a[], int size){
   int i, j, count = 1;
   for (i = 1; i < size; i++)
   {
      for (j = 0; j < i; j++)
      {
         if (a[i] == a[j])
         {
            break;
         }
      }
      if (i == j)
      {
         count++;
      }
   }
   return count;
}

int main()
{
    int n;
  cout << "size bata na : "<<endl;
   cin >> n;
cout << "Elements daal gareeb!"<<endl;
    int arr[n] ;
    for ( int i=0 ; i<n ; i++ )
    {
            cin >> arr[i];
    }
   cout << "no. of distinct elements =" << count_distinct(arr,n) ;
   return 0;
}