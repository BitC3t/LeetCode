// (367) Valid Perfect Square
// 3ms (18.14%)
// 6.92MB (5.67)

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int x = 1;
        while(x*x <= num) {
            if(x*x == num) {
                return true;
            }
            x++;
        }

        return false;
    }
};