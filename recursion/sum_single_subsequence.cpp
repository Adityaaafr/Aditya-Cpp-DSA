#include <bits/stdc++.h>
using namespace std;
bool Sum_printF(int ind, vector <int> &ds, int arr[], int n, int sum, int s){
    if(ind == n){
        if(s == sum){
            // if the condition is satisfied
            for(auto it : ds){
                cout << it << " ";
            }
            cout<<endl;
            return true;
        }
        else return false;

    }
     //Take or pick condition or procedure to include the particular element in your stack space.
    ds.push_back(arr[ind]);
    s+=arr[ind];
    if (Sum_printF(ind+1,ds,arr,n,sum,s) == true)
    return true;
    s-=arr[ind];
    ds.pop_back();

    //not take or not pick condition or procedure to include the particular element in your stack space.
    if (Sum_printF(ind+1,ds,arr,n,sum,s) == true)
    return true;

    return false;


}
int main(){
    int arr[]={1,2,1};
    int sum=2;
    int n=3;
    vector <int> ds;
    Sum_printF(0,ds,arr,n,sum,0);
}