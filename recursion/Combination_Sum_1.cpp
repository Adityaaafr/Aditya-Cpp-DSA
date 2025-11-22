#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    void findCombination(int ind,int target,vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
        if(ind == arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        //pick the element
        if(arr[ind] <= target){
            ds.push_back(arr[ind]);
            findCombination(ind, target-arr[ind],arr,ans,ds);
            ds.pop_back();
        }

        //not picking the element
        findCombination(ind+1,target,arr,ans,ds);

    }
public:
    vector<vector<int>> combinationSum(vector<int> & candidates, int target){
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0,target,candidates,ans,ds);
        return ans;
    }
};
int main(){
    Solution s;
    int n, target;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> candidates(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>candidates[i];
    }
    cout<<"Enter the target sum: ";
    cin>> target;

    vector<vector<int>> result=s.combinationSum(candidates,target);
    cout<< "\nCombinations that sum to "<< target << " are: \n";
    for(auto &combo: result){
        cout << "[ ";
        for(int num: combo){
            cout<< num << " ";
        }
        cout<< "]\n";
    }
    return 0;
}