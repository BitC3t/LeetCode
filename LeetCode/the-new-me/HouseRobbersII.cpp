#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

class Solution {
    public:
        int rob(vector<int> &nums) {
            int n = nums.size();
            vector<int> dp(nums.size(), -1);

            return max(helper(nums, 0, dp), helper(nums, 1, dp));           
        }

        int helper(vector<int> &nums, int index, vector<int> &dp) {
            if(dp[index] != -1) return dp[index];

            int pick = nums[index] + helper(nums, index - 2, dp);
            int notpick = 0 + helper(nums, index - 1, dp);

            return dp[index] = max(pick, notpick);
        }
};
