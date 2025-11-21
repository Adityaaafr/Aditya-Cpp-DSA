#include <bits/stdc++.h>
using namespace std;
int fibs(int n){
    if(n<=1)
    return n;
    int last, slast;
    last=fibs(n-1);
    slast=fibs(n-2);
    return last +slast;

}
int main(){
    int n;
    cout<< "Enter the value of n: ";
    cin>>n;
    cout<<fibs(n);
}