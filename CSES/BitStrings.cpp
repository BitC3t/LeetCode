#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 1000000007

void solve(int t) {
    int ans = 1;
    for(int i = 0; i < t; i++) {
        ans *= 2;
        ans %= MOD;
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    solve(t);
}
