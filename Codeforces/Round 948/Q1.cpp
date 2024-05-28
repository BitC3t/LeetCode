#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(int x, int y) {
    if(y > x) {
        cout << "NO" << endl;
        return;
    }

    if(y == x) {
        cout << "YES" << endl;
        return;
    }

    if((x - y) % 2 == 0) {
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
        int x; int y;
        cin >> x >> y;
        solve(x, y);
    }
}
