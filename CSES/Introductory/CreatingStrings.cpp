#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(string s) {
    sort(s.begin(), s.end());

    set<string> unique;

    do {
        unique.insert(s);
    } while(next_permutation(s.begin(), s.end()));
    cout << unique.size() << endl;
    for(auto str : unique) {
        cout << str << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    solve(s);
 
}
