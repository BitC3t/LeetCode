#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(vector<int>& arr, unordered_map<int,int>& a, int n) {
    int ans = 0;
    for(auto x : a) {
        ans += x.second / 3;        
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int x; cin >> x;
        vector<int> arr(x);
        unordered_map<int, int> a;
        for(int i = 0; i < x; i++) {
            cin >> arr[i];
            a[arr[i]]++;
        }
        solve(arr, a, x);
    }
}
