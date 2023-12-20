// (14) Longest Common Prefix
// 8ms (6.81%)
// 9.48MB (90.85%)

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            unordered_map<int, char> prefixMap;

            for(int i = 0; i < strs[0].size(); i++) {
                prefixMap[i] = strs[0][i];
                bool breakIn = false;

                for(int j = 1; j < strs.size(); j++) {
                    if (strs[j][i] != prefixMap[i]) {
                        prefixMap.erase(i);
                        breakIn = true;
                        break;
                    }
                }

                if(breakIn) {
                    break;
                }
            }

            string prefix = "";
            for(auto it = prefixMap.begin(); it != prefixMap.end(); it++) {
                prefix += it->second;
            }

            return string(prefix.rbegin(), prefix.rend());
        }
};