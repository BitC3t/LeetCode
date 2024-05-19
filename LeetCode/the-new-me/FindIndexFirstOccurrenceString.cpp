#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

class Solution {
    public:
        int strStr(string haystack, string needle) {
            if(haystack == needle) {
                return 0;
            }


            int index = 0;
            for(int i = 0; i < haystack.size(); i++) {
                if(index == needle.size()) {
                    return i - index;
                }
                cout << haystack[i] << ":" << needle[index] << endl;
                if(haystack[i] != needle[index]) {
                    index = 0;
                    i = i - index;
                }

                if(haystack[i] == needle[index]) {
                    index++;
                }
            }

            return (index == needle.size()) ? haystack.size() - 1 : -1;
        }
};
