#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(string s) {
    int ans = 1, count = 1;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i-1]) {
            count++;
        }
        else {
            count = 1;
        }

        ans = max(ans, count);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    solve(s);
}
