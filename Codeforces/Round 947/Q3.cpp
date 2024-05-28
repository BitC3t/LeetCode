#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    cout << arr[arr.size() - 2] << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        vector<int> arr(x);
        for(int i = 0; i < x; i++) cin >> arr[i];
        
        solve(arr);
    }
}
