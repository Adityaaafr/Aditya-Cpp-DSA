#include <bits/stdc++.h>
using namespace std;
void sum(int n,int s){
    if(n<1){
    cout<<"The sum is -> "<<s;
    return ;
    }
    sum(n-1,s+n);

}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    sum(n,0);
}