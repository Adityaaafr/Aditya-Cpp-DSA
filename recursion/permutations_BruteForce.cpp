#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void recur_Permute(vector<vector<int>> &ans, vector<int> &ds, vector<int> arr,int freq[]){
        if(ds.size()==arr.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<arr.size();i++){
            if(!freq[i]){
                ds.push_back(arr[i]);
                freq[i]=1;
                recur_Permute(ans,ds,arr,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }

    }
    public:
    vector<vector<int>> permute(vector <int> &arr){
        vector<vector<int>> ans;
        vector<int>ds;
        int freq[arr.size()];
        for(int i=0;i<arr.size();i++) freq[i]=0;
        recur_Permute(ans,ds,arr,freq);
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
