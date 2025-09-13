#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
       if(nums.empty())
       return 0;   //handles empty array 

       int i = 0;
       for(int j = 1 ; j < nums.size(); j++)
       {
            if(nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j]; //overwrite duplicate
            }
       }
       return i+1;
    }

};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};
    
    int k = sol.removeDuplicates(nums);
      cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}