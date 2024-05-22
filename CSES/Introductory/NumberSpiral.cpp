#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(int y, int x) {
    ll maxi = max(x, y);
    ll square = (maxi - 1) * (maxi - 1);
    if (maxi % 2 == 0) {
        if(x>y) cout << square + y << endl;
        else cout << (maxi * maxi) - x + 1 << endl;
    }
    else {
        if(x>y) cout << (maxi * maxi) - y + 1 << endl;
        else cout << square + x << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int col, row;
        cin >> row;
        cin >> col;
        solve(row, col);
    }
}
