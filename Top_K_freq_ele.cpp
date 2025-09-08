//Top K Frequent Elements- Find the k most frequent elements in an array.
//Input: [1,1,1,2,2,3]
// k=2 
// Output: [1,2] 

// c++ program to find k most frequent element 
// using hash map and sorting
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

// Comparison function to sort the frequency array
static bool compare(pair<int, int> &p1, pair<int, int> &p2) {
    
    // Prioritise element's value incase their frequency was same
    if (p1.second == p2.second)
        return p1.first > p2.first;
    
    // Sort on the basis of decreasing order
    // of frequencies
    return p1.second > p2.second;
}

// Function to find k numbers with most occurrences
vector<int> topKFrequent(vector<int>&arr,int k) {
    int n = arr.size();
    
    // unordered_map 'mp' implemented as frequency hash table
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    // Store the elements of 'mp' in the vector 'freq'
    vector<pair<int, int>> freq(mp.begin(), mp.end());

    // Sort the vector 'freq' on the basis of the
    // 'compare' function
    sort(freq.begin(), freq.end(), compare);
    
    vector<int>res;
    
    // Extract and store the top k frequent elements
    for (int i = 0; i < k; i++)
        res.push_back(freq[i].first);
        
    return res;
}

int main() {
    
    vector<int> arr = {1,1,1,2,2,3};
    int k = 2;
    vector<int> res = topKFrequent(arr, k);
    
    for(int val : res)
        cout << val << " ";
    
}