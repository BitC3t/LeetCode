#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(vector<ll> &a) {
    ll ans = 0;
    for(int i = 1; i < a.size(); i++) {
        if(a[i-1] < a[i]) continue;

        else {
            ans += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    vector<ll> a(t);
    while(t--) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    solve(a);
}
