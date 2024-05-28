#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

class Solution {
    public:
        vector<int> leaders(int a[], int n) {
            int max = INT_MIN;
            vector<int> ans;
            for(int i = n - 1; i >= 0; i--) {
                if(max >= a[i]) {
                    max = a[i];
                    ans.push_back(a[i]);
                }
            }

            return ans;
        }
};
