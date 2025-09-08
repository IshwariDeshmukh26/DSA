#include<iostream>
using namespace std;

int main()
{
   int arr[] = {10,20,30,40,50}; 
   int n = sizeof(arr)/sizeof(arr[0]);

   //Forward traversal
   for(int i = 0; i < n; i ++)
   {
        cout<<arr[i]<<" ";
   }
   cout<<endl;

   //Reverse traversal
   for(int i = n - 1; i >= n; i--)
   {
        cout<<arr[i]<<" ";
   }
   return 0;
}


