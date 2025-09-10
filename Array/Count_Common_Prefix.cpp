#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string ans = "";
        for (int i = 0; i < strs[0].length(); i++) {
            char ch = strs[0][i];  // pick char from first string

            for (int j = 1; j < strs.size(); j++) {
                // if index exceeds length OR mismatch
                if (i >= strs[j].length() || strs[j][i] != ch) {
                    return ans;
                }
            }
            ans += ch; // add char if all match
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> words = {"flower", "flow", "flight"};
    cout << s.longestCommonPrefix(words) << endl; // Output: "fl"
    return 0;
}
