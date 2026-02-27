#include <bits/stdc++.h>
using namespace std;
int fibs(int n){
    if(n<=1)
    return n;
    return fibs(n-1) + fibs(n-2);
}
int main(){
    int n;
    cout<< "Enter the number upto which you to take out the fibonacci series: 5"<<endl;
    cin>>n;
    cout<<"The output is -> "<<fibs(n)<<endl;
    return 0;


}