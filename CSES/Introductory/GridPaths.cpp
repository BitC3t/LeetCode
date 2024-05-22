#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(string& s, int row, int col, int& ans, int step) {
    if(row == 6 and col == 0) {
        ans += 1;
        return;
    }

    // forward and backtrack in each direction
    if(row < 0 || col < 0 || row > 6 || col > 6 || step >= 48) return;

    if(s.at(step) == '?') {
        solve(s, row+1, col, ans, step + 1);
        solve(s, row-1, col, ans, step + 1);
        solve(s, row, col+1, ans, step + 1);
        solve(s, row, col-1, ans, step + 1);
    } else if(s.at(step) == 'D') solve(s, row+1, col, ans, step+1);
    else if(s.at(step) == 'U') solve(s, row-1, col, ans, step+1);
    else if(s.at(step) == 'L') solve(s, row, col-1, ans, step+1);
    else if(s.at(step) == 'R') solve(s, row, col+1, ans, step+1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int ans = 0;
    solve(s, 0, 0, ans, 0);
}
