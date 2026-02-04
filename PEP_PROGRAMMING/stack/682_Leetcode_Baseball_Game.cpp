#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> ops;

        for (int i = 0; i < operations.size(); i++) {

            if (operations[i] == "C") {
                ops.pop();
            }

            else if (operations[i] == "D") {
                int x = ops.top() * 2;
                ops.push(x);
            }

            else if (operations[i] == "+") {
                int first = ops.top();
                ops.pop();

                int second = ops.top();

                ops.push(first);             
                ops.push(first + second);     
            }

            else {
                ops.push(stoi(operations[i]));
            }
        }

        int sum = 0;

        while (!ops.empty()) {
            sum += ops.top();
            ops.pop();
        }

        return sum;
    }
};

int main() {

    Solution sol;

    int n;
    cout << "Enter number of operations: ";
    cin >> n;

    vector<string> operations(n);

    cout << "Enter operations (numbers, C, D, +):" << endl;

    for (int i = 0; i < n; i++) {
        cin >> operations[i];
    }

    int result = sol.calPoints(operations);
}