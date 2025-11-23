#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void func(int ind,int sum,vector<int> &Subs,vector<int> &arr,int n){
        if(ind==n){
            Subs.push_back(sum);
            return;
        }
        //picking the element
        func(ind+1, sum+arr[ind],Subs,arr,n);
        //not picking the element
        func(ind+1,sum,Subs,arr,n);


    }
    public:
    vector<int> Subsetsum(vector<int> arr,int n){
        vector<int> Subs;
        func(0,0,Subs,arr,n);
        sort(Subs.begin(),Subs.end());
        return Subs;
    }

};
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Solution s;
    vector<int> result = s.Subsetsum(arr, n);

    cout << "\nSubset sums are:\n";
    for(int sum : result){
        cout << sum << " ";
    }

    return 0;
}

