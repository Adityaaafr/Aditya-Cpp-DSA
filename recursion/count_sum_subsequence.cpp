#include <bits/stdc++.h>
using namespace std;
 
int count_subsequence(int ind, int arr[],int n, int sum, int s){
    if(ind == n){
        if(s == sum){
            return 1;
        }
        else return 0;
    }
    s+=arr[ind];
    //pick the element
    int l = count_subsequence(ind+1,arr,n,sum,s);

    s-=arr[ind];
    //not pick the element
    int r = count_subsequence(ind+1,arr,n,sum,s);
    return l + r;
}
int main(){
    int arr[]= {1,2,1};
    int n=3;
    int sum=2;
    cout <<"The count for the matching subsequences's sums are -> " << count_subsequence(0,arr,n,sum,0);
}