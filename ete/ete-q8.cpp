#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
bool iosmorphic(string s,string t){
    if(s.size()!=t.size()) return false;
    map<char,int>mp1;
    map<char,int>mp2;
    for(int i=0;i<s.size();i++){
        mp1[s[i]]+=i;
    }
    for(int i=0;i<t.size();i++){
        mp2[t[i]]+=i;
    }
    for(int i=0;i<s.size();i++){
        if(mp1[s[i]]!=mp2[t[i]]) return false;
        
    }
    return true;
}
int main(){
    string s,t;
    cin>>s>>t;
    if(iosmorphic(s,t)) cout<<"yes";
    else cout<<"no";
}