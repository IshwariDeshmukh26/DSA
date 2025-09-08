#include <iostream>
#include <climits> //includes limits of integral types like INT_MAX,INT_MIN,LONG_MAX, LONG_MIN, CHAR_MAX etc.
using namespace std;

void findSecondSmallestAndLargest(int arr[], int n) 
{
    if (n < 2) 
    {
        cout << "Array should have at least 2 elements." << endl;
        return;
    }

    int smallest = INT_MAX, secondSmallest = INT_MAX;
    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        // For smallest and second smallest
        if (arr[i] < smallest) 
        {
            secondSmallest = smallest;
            smallest = arr[i];
        } 
        else if (arr[i] < secondSmallest && arr[i] != smallest) 
        {
            secondSmallest = arr[i];
        }

        // For largest and second largest
        if (arr[i] > largest) 
        {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX)
        cout << "No second smallest element." << endl;
    else
        cout << "Second Smallest: " << secondSmallest << endl;

    if (secondLargest == INT_MIN)
        cout << "No second largest element." << endl;
    else
        cout << "Second Largest: " << secondLargest << endl;
}

int main() 
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findSecondSmallestAndLargest(arr, n);

    return 0;
}
