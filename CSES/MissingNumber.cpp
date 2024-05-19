#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

map<int, int> a;
void solve() {
    for(int i = 1; i <= a.size() + 1; i++) {
        if(a[i] == 0) {
            cout << i << endl;
            break;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    t = t - 1;
    while(t--) {
        int x;
        cin >> x;
        a[x] = 1;
    }

    solve();
}
