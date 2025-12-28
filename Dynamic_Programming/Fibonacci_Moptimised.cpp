#include <bits/stdc++.h>
using namespace std;
int fibs(int n){
    int prev2=0;
    int prev=1;
    int curr=0;
    for(int i=2;i<=n;i++){
        curr=prev2 + prev;
        prev2=prev;
        prev=curr;

    }
    return prev;
 
}
int main(){
    cout<<"Enter the number - the nth fibonacci number you want to see : ";
    int n;
    cin>>n;
    cout<< fibs(n);
    return 0;
}