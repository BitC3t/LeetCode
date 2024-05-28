#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(vector<int>& arr) {
    int gcd1 = -1;
    int gcd2 = -1;

    for(int i = 0; i < arr.size(); i++) {
        int gcd = gcd(arr[i], arr[i+1]);
        if(gcd != 1 and (gcd1 == gcd || gcd2 == gcd)) {
            continue;
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
