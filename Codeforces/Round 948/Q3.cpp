#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

int findlcm(vector<int>& arr, int n) {
    int ans = arr[0];
    for(int i = 1; i < n; i++) {
        ans = lcm(ans, arr[i]);
    }

    return ans;
}
int solve(vector<int>& arr, int n) {
    sort(arr.begin(), arr.end());
    for(int i = n - 1; i >= 0; i--) {
        int lcm = findlcm(arr, i + 1);
        cout << lcm << endl; 
        if(count(arr.begin(), arr.begin() + n, lcm) != 0) {
            continue;
        } else return i;
    }

    
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int x; cin >> x; vector<int> arr(x);
        for(int i = 0; i < x; i++) cin >> arr[i];
        cout << solve(arr, x) << endl;
    }
}
