#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

class Solution {
    public:
        void sortColors(vector<int>& nums) {
            unordered_map<int, int> a;
            for(auto x : nums) {
                a[x]++;
            }
            int count = 0;
            while(a[0] > 0) {
                nums[count] = 0;
                count++;
                a[0]--;
            }
            while(a[1] > 0) {
                nums[count] = 1;
                count++;
                a[1]--;
            }
            while(a[2] > 0) {
                nums[count] = 2;
                count++;
                a[2]--;
            }

        }
};
