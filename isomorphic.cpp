#include<iostream>
#include<vector>

#include<algorithm>
#include<map>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size()){
        cout<<"no"<<endl;
        return false;
    }
    map<char,int>mp1,mp2;
    for(int i=0;i<s.size();i++){
        mp1[s[i]]+=i;
    }
    for(int i=0;i<t.size();i++){
        mp2[t[i]]+=i;
    }
    for(int i=0;i<s.size();i++){
    if(mp1[s[i]]!=mp2[t[i]]){
        cout<<"no";
        return false;
    }
    cout<<"true";
    return true;
    }
}