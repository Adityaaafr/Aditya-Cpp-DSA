#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void recur_permute(int ind, vector<vector<int>> &ans, vector<int> &arr){
        if(ind == arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i=ind;i<arr.size();i++){
            swap(arr[i],arr[ind]);
            recur_permute(ind+1,ans,arr);
            swap(arr[i],arr[ind]);
        }

    }
    public:
    vector<vector<int>> permute(vector<int> &arr){
        vector<vector<int>> ans;
        recur_permute(0,ans,arr);
        return ans;

    }
};
int main() {
    Solution s;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> result = s.permute(arr);

    cout << "\nAll permutations are:\n";
    for (auto &perm : result) {
        cout << "[ ";
        for (int num : perm) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
