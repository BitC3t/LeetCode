#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(int t) {
    int count = 0;
   
    for(int i = 5; t / i >= 1; i *= 5) {
        count += t / i;
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    solve(t);
}
