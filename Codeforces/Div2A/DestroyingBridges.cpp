#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(int x, int y) {
    (x - 1 > y) ? cout << x << endl : cout << 1 << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int x; int y;
        cin >> x >> y;

        solve(x,y);
    }
}
