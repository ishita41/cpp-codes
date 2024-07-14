#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    map<char,int>mp;
    if(s.size()!=t.size()){
        cout<<"no";
        return 0;
    }
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(int i=0;i<t.size();i++){
        mp[t[i]]--;
    }
   for(auto it=mp.begin();it!=mp.end();it++){
    if(it->second!=0) {
        cout<<"no"<<endl;
        return 0;
   }
   }
    cout<<"yes"<<endl;

}