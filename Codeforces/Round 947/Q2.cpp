#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

bool solve(vector<int>& arr, vector<vector<int>>& dp) {
    bool flag = false;
    int i = 0; int j = 0;
    while(true) {        
        if(flag) {
            return true;
        }
        if(i == arr.size()) return false;

               
        for(int k = 0; k < arr.size(); k++) {
            if(dp[i][j] != -1) {
                j++;
                if(j > arr.size()) {
                    j = 0;
                    i++;
                }
                break;
            }

            if(arr[k] % arr[i] == 0 || arr[k] % arr[j] == 0) {
                flag = true;
            } else {
                dp[i][j] = 0;
                dp[j][i] = 0;
                flag = false;
                j++;
                if(j > arr.size()) {
                    j = 0;
                    i++;
                }
                break;
            }
        }        
    }

    return false;
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
        vector<vector<int>> dp(x, vector<int>(x, -1));
        for(int i = 0; i < x; i++) {
            cin >> arr[i];
        }

        solve(arr, dp) ? cout << "YES" << endl : cout << "NO" << endl;
     }
}
