#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter the number of steps: ";
    int n;
    cin >> n;

    int prev2 = 1; // dp[0]
    int prev1 = 1; // dp[1]

    for (int i = 2; i <= n; i++) {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1;
    return 0;
}
