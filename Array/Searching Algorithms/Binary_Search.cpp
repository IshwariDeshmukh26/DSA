#include <iostream>
#include <algorithm> // for sort
using namespace std;

int binarySearch(int arr[], int n, int data) {
    int l = 0, r = n - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == data)
            return mid;
        else if (arr[mid] < data)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {12, 4, 14, 2, 10, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    // Sort the array first
    sort(arr, arr + n);

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

