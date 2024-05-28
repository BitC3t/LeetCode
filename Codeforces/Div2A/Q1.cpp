#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(vector<int>& arr, vector<int>& barr, int n) {
    int i = 0;
    for(int j = 0; j < n; j++) {
        if(arr[j] > barr[j]) {
            arr[n - 1] = barr[j];
            sort(arr.begin(), arr.end());
            i++;
        }
     }

    cout << i << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int a; cin >> a; vector<int> arr(a); vector<int> barr(a);
        for(int i = 0; i < a; i++) {
            cin >> arr[i];
        }

        for(int i = 0; i < a; i++) {
            cin >> barr[i];
        }

        solve(arr, barr, a);
    }
}
