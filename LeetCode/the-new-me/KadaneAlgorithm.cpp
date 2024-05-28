#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int ans = INT_MIN;
            int sum = 0;
            
            for(int i = 0; i < nums.size(); i++) {
                sum += nums[i];
                ans = max(ans, sum);
                if(sum < 0) sum = 0;
            }

            return ans;
        }   
};
