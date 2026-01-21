#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the contents of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int inc=0;
    int diff=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            diff=arr[i-1]-arr[i];
            arr[i]+=diff;
            inc+=diff;
        }
    }
    cout<<"the minimum number of moves required are: "<<inc;
}