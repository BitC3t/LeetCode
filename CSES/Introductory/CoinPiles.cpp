#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(int a, int b) {
    if(((2*b - a) / 3 < 0) or ((2*a - b) / 3 < 0)) {
        cout << "NO" << endl;
        return;
    }

    if(((2*b - a) % 3 == 0) and ((2*a - b) % 3 == 0)) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int a; int b;
        cin >> a >> b;
        solve(a, b);
    }
}
