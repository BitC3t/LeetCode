#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(vector<ll>& ans) {
    sort(ans.begin(), ans.end());
    ll unique = 0;
    for(int i = 1; i < ans.size(); i++) {
        if(ans[i] != ans[i-1]) {
            unique++;
        }
    }
    
    cout << unique + 1 << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    vector<ll> ans;
    while(t--) {
        ll x;
        cin >> x;
        ans.push_back(x);
    }
    solve(ans);
}
