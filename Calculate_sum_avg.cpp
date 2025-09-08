//Write a program to calculate sum and average of all array elements.

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {12,56,89,35,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    for(int i = 0; i < n; i++)
        sum += arr[i];

    double average = (double)sum /n;

    cout<<"Sum:"<<sum<<endl;
    cout<<"Average:"<<average<<endl;
    return 0;
}