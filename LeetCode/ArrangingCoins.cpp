// (441) Arranging Coins
// 3ms (66.87%)
// 7.57MB (5.54%)

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int s = floor((-1 + sqrt(1 + (8LL * n))) / 2);

        return s;
    }
};