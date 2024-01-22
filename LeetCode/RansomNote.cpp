// (383) RansomNote
// 31ms (11.62%)
// 16.39MB (5.23%)

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ransomNoteCount;
        vector<int> magazineCount;

        int common = 0;

    
        for(int i = 0; i < ransomNote.size(); i++) {
            ransomNoteCount.push_back(ransomNote[i]);
        }

        for(int i = 0; i < magazine.size(); i++) {
            magazineCount.push_back(magazine[i]);
        }

        int i = 0;
        int j = 0;

        sort(ransomNoteCount.begin(), ransomNoteCount.end());
        sort(magazineCount.begin(), magazineCount.end());

        while(i < ransomNoteCount.size() && j < magazineCount.size()) {
            if(ransomNoteCount[i] == magazineCount[j]) {
                common++;
                i++;
                j++;
            } else if (ransomNoteCount[i] < magazineCount[j]) {
                return false;
            } else {
                j++;
            }
        }

        if(common == ransomNoteCount.size()) {
            return true;
        } else {
            return false;
        }
    }
};