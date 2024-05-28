#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

bool solve(vector<int>& arr) {
    int max_index = 0;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[max_index] < arr[i]) max_index = i;
    }

    for(int i = 0; i < max_index; i++) {
        if(arr[i] > arr[i+1]) {
            return false;
        }
    }

    for(int i = max_index + 1; i < arr.size(); i++) {
        if(arr[i] < arr[i-1]) return false;
    }

    return true;    
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
        for(int i = 0; i < x; i++) {
            cin >> arr[i];
        }

        solve(arr) ? cout << "Yes" << endl : cout << "No" << endl;
    }
}
