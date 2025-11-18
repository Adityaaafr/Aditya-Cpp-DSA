#include <bits/stdc++.h>
using namespace std;
void Swap(int &a, int &b){
a=a+b;//6+1=7
b=a-b;//7-1=6
a=a-b;//7-6=1;

}
void rev(int l, int r,int arr[]){
if(l>=r){
    return;
}
Swap(arr[l],arr[r]);
rev(l+1,r-1,arr);

}
int main(){
int n;
cout<<"Enter the size of the array: ";
cin>>n;
int arr[n];
cout<<"Enter the elements of the array: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Original Array: "<<"\n";
for(int i=0;i<n;i++){
    cout<<arr[i]<<"\n";
}
cout<<"Array after reversal: "<<"\n";
rev(0,n-1,arr);
for(int i=0;i<n;i++){
    cout<<arr[i]<<"\n";
}

}