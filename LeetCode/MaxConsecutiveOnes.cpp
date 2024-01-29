// (485) Max Consecutive Ones
// 26ms (73.46%)
// 38.48MB (11.43%)

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int count = 0;
        for(int i : nums) {
            if(i == 1) {
                count++;
                if(max < count) {
                    max = count;
                }
            } else {
                count = 0;
            }
        }

        return max;
    }
};