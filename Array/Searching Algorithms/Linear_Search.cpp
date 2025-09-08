//Linear Search

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int data = 30;
     int i;
     int n = 5;

    for(int i=0;i<n;i++)
    {
        if(arr[i] == data)
            {
                cout<<"Data is found at index:"<<i<<endl;
            }
    }
    if(i==n)
    {
        cout<<"Data Not Found"<<endl;
    }
}