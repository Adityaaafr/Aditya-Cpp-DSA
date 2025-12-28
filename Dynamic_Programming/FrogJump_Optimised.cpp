#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter number of stones: ";
    int n;
    cin >> n;

    vector<int> heights(n);
    cout << "Enter heights: ";
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int prev2 = 0; // dp[i-2]
    int prev1 = 0; // dp[i-1]

    for (int i = 1; i < n; i++) {
        int left = prev1 + abs(heights[i] - heights[i - 1]);

        int right = INT_MAX;
        if (i > 1) {
            right = prev2 + abs(heights[i] - heights[i - 2]);
        }

        int curr = min(left, right);
        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1;
    return 0;
}
