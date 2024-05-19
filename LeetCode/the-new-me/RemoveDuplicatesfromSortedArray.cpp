#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int i = 0;
           
            // back and front pointers
            for(int j = 1; j < nums.size(); j++) {
                if(nums[i] != nums[j]) {
                    i++;
                    nums[i] = nums[j];
                }
            }

            return i;
        }
};

