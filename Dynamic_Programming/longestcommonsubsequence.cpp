#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int f(int n, int m, string &text1, string &text2,
          vector<vector<int>> &dp) {

        // Base case
        if (n < 0 || m < 0) {
            return 0;
        }

        // Memoization check
        if (dp[n][m] != -1)
            return dp[n][m];

        // If characters match
        if (text1[n] == text2[m]) {
            return dp[n][m] =
                1 + f(n - 1, m - 1, text1, text2, dp);
        }
        // If characters do not match
        else {
            return dp[n][m] =
                max(
                    f(n - 1, m, text1, text2, dp),
                    f(n, m - 1, text1, text2, dp)
                );
        }
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        return f(n - 1, m - 1, text1, text2, dp);
    }
};

int main() {
    string text1, text2;

    cout << "Enter first string: ";
    cin >> text1;

    cout << "Enter second string: ";
    cin >> text2;

    Solution obj;
    int ans = obj.longestCommonSubsequence(text1, text2);

    cout << "Length of Longest Common Subsequence = " << ans << endl;

    return 0;
}
