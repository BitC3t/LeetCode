// (461) Hamming Distance
// 0ms (100%)
// 6.98MB (11.98%)

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        for(int i = 0; i < 32; i++) {
            int x_bit = x & 1;
            int y_bit = y & 1;
            if(x_bit != y_bit) {
                count++;
            }

            x = x >> 1;
            y = y >> 1;
        }

        return count;
    }
};