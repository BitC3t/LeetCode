// (350) Intersection of Two Arrays II
// 3ms (84.31% - WOOO)
// 12.51MB (5.27%)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        int i = 0;
        int j = 0;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] == nums2[j]) {
                result.push_back(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }

        return result;
    }
};