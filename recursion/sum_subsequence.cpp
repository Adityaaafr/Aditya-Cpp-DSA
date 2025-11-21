#include <bits/stdc++.h>
using namespace std;
void Sum_printF(int ind, vector <int> &ds, int arr[], int n, int sum, int s){
    if(ind == n){
        if(s == sum){
            for(auto it : ds){
                cout << it << " ";
            }
            cout<<endl;
        }
        return;

    }
     //Take or pick condition or procedure to include the particular element in your stack space.
    ds.push_back(arr[ind]);
    s+=arr[ind];
    Sum_printF(ind+1,ds,arr,n,sum,s);
    s-=arr[ind];
    ds.pop_back();

    //not take or not pick condition or procedure to include the particular element in your stack space.
    Sum_printF(ind+1,ds,arr,n,sum,s);

}
int main(){
    int arr[]={1,2,1};
    int sum=2;
    int n=3;
    vector <int> ds;
    Sum_printF(0,ds,arr,n,sum,0);
}