// (482) License Key Formatting
// 7ms (77.13%)
// 9.47MB (15.28MB)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int count = 0;
        string result = "";

        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] != '-') {
                if(result.length()%(k+1) == k) {
                    result += '-';
                }

                result += toupper(s[i]);
            }
        }

        reverse(result.begin(), result.end());
        return result;
    }
};