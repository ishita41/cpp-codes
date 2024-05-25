#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    bool ans=true;
    if(s.size()!=t.size()) ans=false;
    map<char,int>m1;
    map<char,int>m2;
    for(int i=0;i<s.size();i++){
        m1[s[i]]+=i;
    }
    for(int i=0;i<t.size();i++){
        m2[t[i]]+=i;
    }
    for(int i=0;i<s.size();i++){
        if(m1[s[i]]!=m2[t[i]]){
            ans=false;
        }
    }
    if(ans) cout<<"yes";
    else cout<<"no";
}