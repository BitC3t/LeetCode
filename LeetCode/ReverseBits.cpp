#include <iostream>
#include <bits/stdc++.h>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        return reverseBits(n, 0, 31);
    }

    uint32_t reverseBits(uint32_t n, int low, int high) {
        if(low >= high) {
            return n;
        }

        int mid = (low + high) / 2;
        uint32_t left = reverseBits(n, low, mid);
        uint32_t right = reverseBits(n, mid + 1, high);

        return (left << (high - mid)) | right;
    }
};