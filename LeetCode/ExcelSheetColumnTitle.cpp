// (168) Excel Sheet Column Title
// 0ms (100% - YAY)
// 6.30 (37.15%)

#include <bits/stdc++.h>
using namespace std;
#include <string>

static int MAX_ALPHA = 26;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        if(columnNumber == 0) {
            return "";
        }

        int remainder = columnNumber % MAX_ALPHA;

        string result = "";
        if(remainder == 0) {
            result = convertToTitle(columnNumber / MAX_ALPHA - 1);
            result += 'Z';
        } else {
            result = convertToTitle(columnNumber / MAX_ALPHA);
            result += 'A' + remainder - 1;
        }

        return result;
    }
};