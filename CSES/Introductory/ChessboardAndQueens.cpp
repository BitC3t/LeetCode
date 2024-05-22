#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define MOD 10000000007 // 10e9 + 7

void solve(vector<string>& board, int &ans, vector<bool>& colOccupied, vector<bool>& firstDiagonal, vector<bool>& secondDiagonal, int row) {
    if(row == 8) {
        ans += 1;
        return;
    }


    for(int col = 0; col < 8; col++) {
        // cout << "test" << endl;
        if(board[row][col] == '*' || colOccupied[col] || firstDiagonal[row - col + 8] || secondDiagonal[row + col]) continue;        
        colOccupied[col] = true; // forwardtracking step
        firstDiagonal[row - col + 8] = true;
        secondDiagonal[row + col] = true;
        solve(board, ans, colOccupied, firstDiagonal, secondDiagonal, row + 1);
        colOccupied[col] = false;
        firstDiagonal[row - col + 8] = false;
        secondDiagonal[row + col] = false; // backtracking step
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> board(8);
    for(int i = 0; i < 8; i++) {
        cin >> board[i];
    }

    vector<bool> colOccupied(10, false);
    vector<bool> firstDiagonal(20, false);
    vector<bool> secondDiagonal(20, false);
    int ans = 0;
    solve(board, ans, colOccupied, firstDiagonal, secondDiagonal, 0); 

    cout << ans << endl;
}
