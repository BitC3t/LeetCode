#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(ll t) {
    cout << t << " ";
    
    if(t == 1) {
        return;
    }

    if(t % 2 != 0) {
        solve((t*3) + 1);
    } else {
        solve(t / 2);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    solve(t);
}
