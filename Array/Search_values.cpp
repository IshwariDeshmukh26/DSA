// Write a program to  search the value from the given array using Linear and Binary Search: 
// Int A[5]={15,69,89,99,105}  
//Key=2 
//write its space and time complexity

#include<iostream>
#include<algorithm> //It allows you to perform common operations efficiently on containers like arrays, vectors, lists, etc., without writing the logic manually.
using namespace std;

//Linear Search
int linearSearch(int arr [],int n ,int key)
{
    for(int i = 0 ; i < n; i++)
        if(arr[i] == key)
        return i;
    return -1;
}

//Binary Search
int binarySearch(int arr [],int n, int key)
{
    int l = 0, r = n-1;
    while(l <= 0)
    {
        int mid = (l+r)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] <key)
            l = mid + 1;
        else 
            r = mid -1;
    }
    return -1;

}
int main()
{
    int A[5]={15,69,89,99,105} ;
    int key = 89;
    int n = 5;

    //Linear Search
    int LinearPos = linearSearch(A,n,key);
    if(LinearPos != -1)
        cout<<"Linear Search Found at index:"<<LinearPos<<endl;
    else
        cout<<"Linear Search Not Found"<<endl;

    //Binary Search(array must me sorted)
    sort(A,A+n);
    int BinaryPos = binarySearch(A,n,key);
    if(BinaryPos != -1)
        cout<<"Binary Search Found at index:"<<BinaryPos<<endl;
    else
        cout<<"Binary Search Not Found"<<endl;

    return 0; 

}