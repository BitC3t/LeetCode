// (268) Missing Numbers
// 10ms (91.54%)
// 20.30MB (5.31%)

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        int n = nums.size();
        return (n * (n + 1) / 2) - sum;
    }
};

