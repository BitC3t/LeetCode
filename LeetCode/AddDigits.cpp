// (258) Add Digits
// 0ms (100% - WOOO)
// 7.47MB (16.50%)

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if(num < 10) {
            return num;
        }

        int sum = 0;
        while(num > 0) {
            sum += (num % 10);
            num /= 10;
        }

        return addDigits(sum);
    }
};