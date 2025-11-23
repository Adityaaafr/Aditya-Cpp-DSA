#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<vector<string>>Pal_partition(string s){
        vector<vector<string>> ans;
        vector<string> ds;
        func(0,ds,ans,s);
        return ans;

    }
    void func(int ind, vector<string> &ds, vector<vector<string>> &ans,string s){
        if(ind == s.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(isPalindrome(s,ind,i)){
                ds.push_back(s.substr(ind, i - ind + 1));
                func(i + 1,ds,ans,s);
                ds.pop_back();
            }
        }
    }
    bool isPalindrome(string s, int start, int end){
        while(start <=  end){
            if(s[start++] != s[end--])
            return false;
        }
        return true;
    }

};
int main() {
    Solution sol;

    string s;
    cout << "Enter a string: ";
    cin >> s;

    vector<vector<string>> result = sol.Pal_partition(s);

    cout << "\nPalindrome Partitions are:\n";
    for (auto &partition : result) {
        cout << "[ ";
        for (auto &str : partition) {
            cout << str << " ";
        }
        cout << "]\n";
    }

    return 0;
}

