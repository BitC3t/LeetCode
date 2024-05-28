#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(int x, unordered_map<int, int>& a) {
    for(int i = 1; ;i++) {
        
    }

    
        
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int x; cin >> x;
        unordered_map<int, int> a;
        if(x % 2 != 0) a[0] = -1;

        if(a[0] == -1) {
            solve(x+1, a, 2);
            return;
        } 

        solve(x, a, 1);

    }
}
