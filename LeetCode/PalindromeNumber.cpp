// (9) PalindromeNumber
// 4ms (79.68%)
// 6.52MB (9.76%)

#include <stack>
#include <iostream>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {
            long long int reversed = 0;
            long long int temp = x;

            if (x < 0) {
                return false;
            }

            while(temp != 0) {
                reversed = reversed * 10 + temp % 10;
                temp /= 10;
            }

            return reversed == x;
        }
};