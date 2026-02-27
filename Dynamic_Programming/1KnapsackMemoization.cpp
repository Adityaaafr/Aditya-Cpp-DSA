#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int f(int ind, int W, vector<int> &val, vector<int> &wt, vector<vector<int>> &dp) {
        // Base case
        if (ind == 0) {
            if (wt[0] <= W)
                return val[0];
            return 0;
        }

        // Memoization check
        if (dp[ind][W] != -1)
            return dp[ind][W];

        // Not take
        int notTake = f(ind - 1, W, val, wt, dp);

        // Take
        int take = INT_MIN;
        if (wt[ind] <= W) {
            take = val[ind] + f(ind - 1, W - wt[ind], val, wt, dp);
        }

        // Store and return
        return dp[ind][W] = max(notTake, take);
    }

    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = wt.size();
        vector<vector<int>> dp(n, vector<int>(W + 1, -1));
        return f(n - 1, W, val, wt, dp);
    }
};

int main() {
    int n, W;
    cin >> n;

    vector<int> wt(n), val(n);
    for (int i = 0; i < n; i++) cin >> wt[i];
    for (int i = 0; i < n; i++) cin >> val[i];
    cin >> W;

    Solution obj;
    cout << obj.knapsack(W, val, wt);

    return 0;
}
