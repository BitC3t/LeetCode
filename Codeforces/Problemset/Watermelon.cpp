#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(int t) {
    if(t%2 == 0 and t >= 4) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    solve(t);
}
