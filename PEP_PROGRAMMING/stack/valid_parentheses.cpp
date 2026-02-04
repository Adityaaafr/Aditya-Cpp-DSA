#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {

            // If opening bracket, push
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } 
            else {

                // If stack is empty, no matching opening
                if (st.empty()) {
                    return false;
                }

                // Get top element
                char top = st.top();
                st.pop();

                // Check if brackets match
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // Stack should be empty at end
        return st.empty();
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter a bracket string: ";
    cin >> s;

    if (obj.isValid(s)) {
        cout << "Valid Parentheses" << endl;
    } 
    else {
        cout << "Invalid Parentheses" << endl;
    }

    return 0;
}
