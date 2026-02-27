#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int f(int ind, int W, vector<int> &val, vector<int> &wt) {
        // Base case
        if (ind == 0) {
            if (wt[0] <= W)
                return val[0];
            return 0;
        }

        // Not take the current item
        int notTake = f(ind - 1, W, val, wt);

        // Take the current item (if possible)
        int take = INT_MIN;
        if (wt[ind] <= W) {
            take = val[ind] + f(ind - 1, W - wt[ind], val, wt);
        }

        return max(notTake, take);
    }

    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = wt.size();
        return f(n - 1, W, val, wt);
    }
};

int main() {
    int n, W;

    cout << "Enter number of items: ";
    cin >> n;

    vector<int> wt(n), val(n);

    cout << "Enter weights of items:\n";
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    cout << "Enter values of items:\n";
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }

    cout << "Enter knapsack capacity: ";
    cin >> W;

    Solution obj;
    int result = obj.knapsack(W, val, wt);

    cout << "Maximum value in Knapsack = " << result << endl;

    return 0;
}
