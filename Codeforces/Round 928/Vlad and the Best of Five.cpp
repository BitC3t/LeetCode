#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n-- > 0) {
        string s;
        
        cin >> s;

        unordered_map <char, int> m;

        for(int i = 0; i < 5; i++) {
            m[s[i]]++;
        }

        cout << (m['A'] > m['B'] ? 'A' : 'B') << endl;
    }
}