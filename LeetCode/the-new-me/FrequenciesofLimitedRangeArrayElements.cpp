#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

class Solution {
    public:
        void frequencyCount(vector<int>& arr, int N, int P) {
            unordered_map<int, int> m;
            for(int i = 0; i < N; i++) {
                m[arr[i]]++;
            }
        }
};
