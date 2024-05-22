#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(string s) {
    unordered_map<char, int> m;

    for(int i = 0; i < s.size(); i++) {
        m[s.at(i)]++;
    }
    
    int oddCount = 0;
    for(pair<char, int> a : m) {
        if(a.second % 2 != 0) oddCount++;
    }

    if(oddCount > 1) {
        cout << "NO SOLUTION" << endl;
        return;
    }

    vector<char> ans(s.size(), ' ');
    int count = 0; int index = 0;
    for(pair<char, int> a : m) {
        if(a.second % 2 != 0) {
            ans[s.size() / 2] = a.first;
            a.second--;
        }

        if(a.second % 2 == 0) {
            while(count != (a.second / 2)) {
                ans[index] = a.first;
                ans[s.size() - index - 1] = a.first;       
                count++; index++;        
            }
        }

        count = 0;
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << "";
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    solve(s);
}
