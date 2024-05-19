#include <iostream>
#include <vector>

using namespace std;

const int MAX_BITS = 31;

int minGroups(const vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> dp(n + 1, vector<int>(1 << MAX_BITS, n));
    for (int i = 0; i < 1 << MAX_BITS; ++i) {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; ++i) {
        for (int mask = 0; mask < 1 << MAX_BITS; ++mask) {
            dp[i][mask] = min(dp[i - 1][mask], dp[i - 1][mask ^ nums[i - 1]] + 1);

            for (int bit = 0; bit < MAX_BITS; ++bit) {
                if (mask & (1 << bit) && (nums[i - 1] & (1 << bit))) {
                    dp[i][mask] = n;
                    break;
                }
            }
        }
    }

    int minGroups = n;
    for (int mask = 0; mask < 1 << MAX_BITS; ++mask) {
        minGroups = min(minGroups, dp[n][mask]);
    }

    return minGroups;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int minGroups = minGroups(nums);
    cout << minGroups << endl;

    return 0;
}
