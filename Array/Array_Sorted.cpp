//Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not.
//If the array is sorted then return are is sorted, Else return not sorted.
#include<iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& n) {
    for(int i = 0; i < n.size() - 1; i++) {
        if(n[i] > n[i + 1])
            return false;
    }
    return true;
}

int main() {
    vector<int> n = {1, 2, 3, 4, 5};
    if(isSorted(n))
        cout << "Array is sorted.";
    else
        cout << "Array is not sorted.";
    return 0;
}
