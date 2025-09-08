//Program to Check if the array is sorted or not.
#include<iostream>
using namespace std;

bool isSorted(int arr[],int n)
{
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i]< arr[i - 1])
        {
            return false; //Not Sorted
        }
    }
    return true; //Sorted
}

int main()
{
    int n;
    cout<<"Enter Size of array:";
    cin>> n;

    int arr[n];
    cout<<"Enter elements of array:\n";
    for (int i = 0 ; i< n ; i++)
    {
        cin>>arr[i];
    }
    if(isSorted(arr,n))
    {
        cout<<"Array is sorted:\n";
    }
    else
    {
        cout<<"Array is NOT sorted:\n";
    }
    return 0;
}