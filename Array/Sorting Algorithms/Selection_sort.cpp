#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) 
{
    for (int i = 0; i < n-1; i++) 
    {
        int minIndex = i;
        
        // Find the minimum element in the unsorted part
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        // Swap the found minimum with the first unsorted element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() 
{
    int arr[] = {7,4,10,8,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
