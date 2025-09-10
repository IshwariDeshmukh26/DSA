#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution
{
public:
    vector<int>twoSum(vector<int> & nums ,int target)
    {
        unordered_map<int,int> mp; //element->index
        for(int i = 0 ; i < nums.size(); i++)
        {
            int complement = target - nums[i];

            if(mp.find(complement) != mp.end())
            {
                return{mp[complement],i}; //return indices directory
            }
            mp[nums[i]] = i;
        }
        return {}; //returns empty if no solution
    }

};

int main()
{
    Solution s;
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> result = s.twoSum(nums,target);
    cout<<"[" <<result[0]<< ","<<result[1] <<"]" <<endl;

    return 0;
}