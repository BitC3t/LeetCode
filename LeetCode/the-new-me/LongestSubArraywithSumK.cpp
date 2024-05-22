#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

class Solution {
    public:
        int lenOfLongSubarr(int A[], int N, int K) {
            int i = 0;
            int j = 0;

            int sum = 0;
            int m = INT_MIN;
            while(i < N and j < N) {
                if(sum > K) {
                    i++;
                    sum -= A[i];
                } else if (sum == K) {
                    m = max(m, j-i+1);
                    i++;
                    sum -= A[i];
                } else {
                    sum += A[j];
                    j++;
                }
            }

            return m;
        }
};
