#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

class Solution {
    public:
        ll pairWithMaxSum(ll arr[], ll N) {
            if (N < 2) return -1;

            int res = arr[0] + arr[1];
            for(int i = 1; i < N - 1; i++) {
                res = max(res, arr[i] + arr[i+1]);
            }

            return res;
        }
};
