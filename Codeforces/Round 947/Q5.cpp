#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(vector<int> adj[], int n, unordered_map<int, int>& colors, int countBlack, int anyblack, vector<int>& indeg) {
    if(countBlack == 0) {
        cout << "NO" << endl;
        return;
    }

    queue<int> blacks;
    vector<int> visited(n+1, 0);
    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(colors[i] == 1 and indeg[i] == 1) {
            blacks.push(i);
            break;
        }
    }

    while(!blacks.empty()) {
        int black = blacks.front();
        blacks.pop();
        visited[black] = 1;
        count += 1;
        int cou = 0;
        for(int x : adj[black]) {
            if(colors[x] == 1 and visited[x] != 1) {
                blacks.push(x);
                cou++;
                
            }
            
            if(cou > 1) {
                cout << "NO" << endl;
                return;
            }
        }
    }

    (count == countBlack) ? cout << "YES" << endl : cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        unordered_map<int, int> colors;
        int n; int q;
        cin >> n >> q;
        vector<int> adj[n+1];
        vector<int> indeg(n+1, 0);
        int anyblack;
        int countBlack = 0;
        for(int i = 1; i <= n; i++) {
            cin >> colors[i];
            if(colors[i] == 1) {
                anyblack = i;
                countBlack += 1;
            }
        }
        for(int i = 0; i < n-1; i++) {
            int x; int y;
            cin >> x >> y;
            
            adj[x].push_back(y);
            adj[y].push_back(x);
            indeg[x]++;
            indeg[y]++;
        }

        for(int i = 0; i < q; i++) {
            int alter;
            cin >> alter;
            if (colors[alter] == 1) {
                colors[alter] = 0;
                countBlack -= 1;
            } else {
                colors[alter] = 1;
                countBlack += 1;
            }
            cout << countBlack << endl;
            solve(adj, n, colors, countBlack, anyblack, indeg);
        }
    }
}
