#include <bits/stdc++.h>

class Solution {
    public:
        int hammingWeight(uint32_t n) {
            // 00000000101010101010101010101010
            // dnc, 0, 31 -> 0, 15 ; 16, 31
            // dnc, 0, 15 -> 0, 7 ; 8, 15
            // dnc, 0, 7 -> 0, 3 ; 4, 7
            // dnc, 0, 3 -> 0, 1 ; 2, 3
            // dnc, 0, 1 -> 0, 0 ; 1, 1
            if(n == 0) {
                return 0;
            } else if (n == 1) {
                return 1;
            }

            int mid = to_string(n).length() / 2;

            uint32_t left = hammingWeight(n >> (mid + 1));
            uint32_t right = hammingWeight(n & ((1 << (mid + 1)) - 1));
            
            return left + right;
        }
};