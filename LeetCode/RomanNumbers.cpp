// (13) Roman To Integer
// 8ms (66.62%)
// 8.7MB (33.56%)

#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

class Solution {
    public:
        int romanToInt(string s) {
            unordered_map<char, int> romanMap = {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
            };

            int n = s.length();
            int sum = 0;
            for(int i = 0; i < n; i++) {
                if(romanMap[s[i]] < romanMap[s[i+1]]) {
                    sum -= romanMap[s[i]];
                } else {
                    sum += romanMap[s[i]];
                }
            }

            return sum;
        }

};

int main() {
            Solution sol;
            string s = 
            "MCMXCIV";
            cout << sol.romanToInt(s) << endl;
            return 0;
        }