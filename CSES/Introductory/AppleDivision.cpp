#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

ll solve(vector<ll>& x, ll sum1, ll sum2, ll N, ll index) {
    if(index == N) {
        return abs(sum1 - sum2);
    }
    ll grp1 = solve(x, sum1 + x[index], sum2, N, index + 1);
    ll grp2 = solve(x, sum1, sum2 + x[index], N, index + 1);

    return min(grp1, grp2);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    vector<ll> a(20);
    for(int i = 0; i < t; i++) {
        cin >> a[i];
    }

    ll ans = solve(a, 0, 0, t, 0);
    cout << ans << endl;
}
