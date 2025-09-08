#include <iostream>
using namespace std;

// Merges two subarrays of arr[]
void merge(int arr[], int lb, int mid, int ub)
{
    int n1 = mid - lb + 1;
    int n2 = ub - mid;

    // Temporary arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[lb + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temp arrays back into arr[]
    int i = 0, j = 0, k = lb;
    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    // Copy remaining elements of L[]
    while (i < n1)
        arr[k++] = L[i++];

    // Copy remaining elements of R[]
    while (j < n2)
        arr[k++] = R[j++];
}

// Merge Sort function
void mergeSort(int arr[], int lb, int ub) 
{
    if (lb < ub) 
    {
        int mid = lb + (ub - lb) / 2;

        // Sort first and second halves
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);

        // Merge the sorted halves
        merge(arr, lb, mid, ub);
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
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
