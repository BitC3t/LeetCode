#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> mpp;
            for(int i = 0; i < nums.size(); i++) {
                int num = nums[i];
                int needed = target - num;
                if(mpp.find(needed) != mpp.end()) {
                    return {num, needed};
                }

                mpp[num] = 1;
            }

            return {};
        }
};
