#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(int t) {
    cout << 0 << endl;

    ll count = 2;
    while(count <= t) {
        ll x = ((((count*count)*(count*count - 1))/2) - 4*((count - 2) * (count - 1)));
        cout << x << endl;
        count++;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    solve(t);
}
