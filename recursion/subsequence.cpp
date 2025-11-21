#include <bits/stdc++.h>
using namespace std;
void printF(int ind, vector <int> &ds,int arr[],int n){
    if(ind==n){
        for(auto it: ds){
            cout<< it <<" ";
        }
        cout<<endl;
        return;
    }
    //Take or pick condition or procedure to include the particular element in your stack space.
    ds.push_back(arr[ind]);
    printF(ind+1,ds,arr,n);
    ds.pop_back();

    //not take or not pick condition or procedure to include the particular element in your stack space.
    printF(ind+1,ds,arr,n);

}
int main(){
    int arr[]={3,1,2};
    int n=3;
    vector <int> ds;
    printF(0,ds,arr,n);
    return 0;
}