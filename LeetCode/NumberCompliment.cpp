// (476) Number Compliment
// 3ms (21.86%)
// 7.19MB (8.42%)

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int count = 0;
        int temp = num;

        while(num > 0) {
            num = num / 2;
            count++;
        }

        return (((pow(2, count)) - temp) - 1);
    }
};