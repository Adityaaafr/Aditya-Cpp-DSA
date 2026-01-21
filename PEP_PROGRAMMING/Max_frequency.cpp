#include <bits/stdc++.h>
using namespace std;
int main(){
    string k;
    cout<<"enter the string in which you want to check the max frequency count: ";
    cin>>k;
    int s=k.length();
    int count =1;
    int m=1;
    for(int i=1;i<s;i++){
        if(k[i] == k[i-1]){
            count++;
        }
        else{
            m=max(count,m);
            count=1;
        }
    }
    cout<<m;
}