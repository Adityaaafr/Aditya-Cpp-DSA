#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void find_subs(int ind, vector<vector<int>> &ans, vector<int> &ds, vector<int> &arr){
        ans.push_back(ds);
        for(int i=ind;i<arr.size();i++){
            if(ind!=i && arr[i]==arr[i-1])continue;
            ds.push_back(arr[i]);
            find_subs(i+1,ans,ds,arr);
            ds.pop_back();
        }

    }
    public:
    vector<vector<int>> Subs_with_dup(vector<int> &arr){
        vector<vector<int>> ans;
        vector<int> ds;
        sort(arr.begin(),arr.end());
        find_subs(0,ans,ds,arr);
        return ans;

    }
};
int main() {
    Solution s;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> result = s.Subs_with_dup(arr);

    cout << "\nSubsets (without duplicates):\n";
    for (auto &subset : result) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}