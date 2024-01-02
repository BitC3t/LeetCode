// (88) Merge Sorted Array
// 0ms (100%)
// 9.67MB (5.21%)

using namespace std;
#include <vector>
#include bits/stdc++.h

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};