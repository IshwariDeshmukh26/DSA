//Palindrome Number
// [121,-121,10]

#include <iostream>
using namespace std;

class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        // Step 1: Negative numbers are not palindromes
        if (x < 0) 
        return false;

        long reversed = 0;
        long original = x;

        //Step 2: Reverse the number completely
        while(x != 0)
        {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        //Step 3: Compare original number with reversed number
        return reversed == original;
    }
};

int main() {
    Solution sol;

    // Test cases
    int nums[] = {121, -121, 10, 1221, 0};
    for (int n : nums) {
        cout << "Input: " << n
             << " -> Output: " << (sol.isPalindrome(n) ? "true" : "false")
             << endl;
    }

    return 0;
}