//Write a program to Merge two sorted array into single sorted array.
//       int A[5]={12,56,89,35,67,6}          int B[5]={2,96,88,45,7,65} 

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int A[5] = {12,56,89,35,67};
    int B[5] = {2,96,88,45,65};
    int merged[10];

    for (int i = 0 ; i < 5 ; i++)merged[i] = A[i];
    for(int i =  0 ; i < 5 ; i++)merged[5 + i] = B[i];

    sort(merged,merged + 10);
    cout<<"Merged Sorted Array:";
    for(int i = 0 ; i < 10 ;i++)
        cout<<merged[i]<<" ";
    cout<< endl;

    return 0;


}