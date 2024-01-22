// (349) Intersection of Two Arrays
// 0ms (100% - WOOO)
// 12.34MB (6.12%)

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
                if(count(result.begin(), result.end(), nums1[i]) == 0) {
                    result.push_back(nums1[i]);
                }
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