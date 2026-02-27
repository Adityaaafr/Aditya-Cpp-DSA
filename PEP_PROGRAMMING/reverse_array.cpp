#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int l,int r){
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
}
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the number of turns you want to rotate the array: ";
    cin>>k;
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
