#include <bits/stdc++.h>
using namespace std;
string make_the_String_great(string str){
    stack <char> check;
    for(int i=0;i<str.size();i++){
        if(!check.empty() && abs(check.top() - str[i]) == 32){
            check.pop();
        }
        else
        check.push(str[i]);
    }

    string ans="";
    while(!check.empty()){
        ans += check.top();
        check.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    string str;
    cout<<"enter the string you want to make great: "<<endl;
    getline(cin,str);
    string ans = make_the_String_great(str);
    cout<<ans;
}