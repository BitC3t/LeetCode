#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main() {
    int n;

    cin >> n;

    while(n-- > 0) {
        int x;

        cin >> x;

        unordered_map <int, int> a;
        int count = 0;

        while(x-- > 0) {
            string s;

            cin >> s;

            for(int i = 0; i < s.size(); i++) {
                if(s[i] == '1') {
                    a[count]++;
                }
            }

            count++;
        }

        bool flag = false;

        for(int i = 0; i < a.size() - 1; i++) {
            if(a[i] == 0) {
                continue;
            } else if (a[i] == a[i+1]) {
                flag = true;
            } else if (a[i] - a[i+1] == 1 || a[i] - a[i+1] == -1) {
                flag = false;
            }
        }

        cout << (flag ? "SQUARE" : "TRIANGLE") << endl;
    }
}