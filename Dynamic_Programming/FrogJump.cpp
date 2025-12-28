#include <bits/stdc++.h>
using namespace std;

int f(int ind, vector<int> &heights, vector<int> &dp) {
    if (ind == 0) return 0;

    if (dp[ind] != -1)
        return dp[ind];

    int left = f(ind - 1, heights, dp) 
               + abs(heights[ind] - heights[ind - 1]);

    int right = INT_MAX;
    if (ind > 1) {
        right = f(ind - 2, heights, dp) 
                + abs(heights[ind] - heights[ind - 2]);
    }

    return dp[ind] = min(left, right);
}

int main() {
    cout << "Enter number of stones: ";
    int n;
    cin >> n;

    vector<int> heights(n);
    cout << "Enter heights: ";
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    vector<int> dp(n, -1);
    cout << f(n - 1, heights, dp);

    return 0;
}