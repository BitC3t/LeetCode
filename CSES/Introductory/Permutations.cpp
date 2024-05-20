#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(int t) {
    if(t == 1) {
        cout << 1 << endl;
        return;
    } 

    if(t == 4) {
        cout << "2 4 1 3" << endl;
        return;
    }

    if(t < 4) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    int temp = t;
    if(t % 2 != 0) t--;

    while(t != -1) {
        cout << t << " ";
        t = t - 2;

        if(t == 0) {
            t = (temp % 2 == 0) ? temp - 1 : temp;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    solve(t);
}

