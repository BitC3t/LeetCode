#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n = nums.size();
            for(int i = 0; i < n - 1; i++) {
                for(int j = i+1; j < n; j++) {
                    if(nums[i] + nums[j] == target)
                        return {i, j};
                }
            }

            return {};
        }
};

/*
WEIRDER SOLUTION but more efficient: Use an unordered map and make a map 
that is complementing the number and return that. Continue filling the map
as you go on.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }

        return {}; // No solution found
    }
};

*/