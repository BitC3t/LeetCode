// (448) Find All Numbers Disappeared in an Array
// 35ms (92.28%)
// 35.97 (38.41%)

#include <iostream>
#include <string>

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> seen(nums.size() + 1);
        vector<int> ans;

        for (int c : nums) {
            seen[c] = true;
        }

        for (int i = 1; i < seen.size(); i++) {
            if (!seen[i]) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};