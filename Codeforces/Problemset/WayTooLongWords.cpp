#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(string s) {
    int sizeString = s.length();
    if (sizeString > 10) {
        cout << s.at(0) << (sizeString - 2) << s.at(sizeString - 1) << endl;
        return;
    }

    cout << s << endl;
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        solve(s);
    }
}
