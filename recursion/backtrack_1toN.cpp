#include <bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if(i<1){

        return;
    }
    print(i-1,n);
    cout<<i<<" ";

}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    print(n,n);
}