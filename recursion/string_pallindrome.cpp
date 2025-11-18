#include <bits/stdc++.h>
using namespace std;
bool pallindrome(int i,int size,string s){
    if(i>=size/2)
    return true;
    if(s[i]!=s[size-i-1]){
        return false;
    }
    return pallindrome(i+1,s.size(),s);

}
int main(){
    string s;
    cout<<"Enter the string for which you want to check the property of pallidrome -> ";
    cin>>s;
    if(pallindrome(0,s.size(),s)==true){
        cout<<"The string is pallindrome";
    }
    else{
        cout<<"The string is not pallindrome";
    }
}