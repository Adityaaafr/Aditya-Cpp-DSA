#include <bits/stdc++.h>
using namespace std;
int fibs(int n, vector<int> &dp){
    if(n<=1) return n;
    if (dp[n]!= -1) return dp[n];
    return dp[n]=fibs(n-1,dp) +fibs(n-2,dp);
}
int main(){
    cout<<"Enter the number - the nth fibonacci number you want to see : ";
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<< fibs(n, dp);
    return 0;
}