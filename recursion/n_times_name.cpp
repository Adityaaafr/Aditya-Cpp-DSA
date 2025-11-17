#include <bits/stdc++.h>
using namespace std;
void n_times(int n,string name,int c){
    if(c==n)
    return;
    cout<<" The name is -> "<<name<<"\n";
    c++;
    n_times(n,name,c);

}
int main(){
    cout<<"Enter the value of n: ";
    int c=0;
    int n;
    cin>>n;
    cout<<"Enter the name you want to print: ";
    string name;
    cin>>name;
    n_times(n,name,c);

}