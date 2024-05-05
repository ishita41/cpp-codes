#include<iostream>
#include<vector>
#include<string>
#include<map> 
using namespace std;
int main(){
    string s;
    getline(cin,s);
    map<char,int>mp;
    string ans="";
    for(int i=0;i<s.size();i++){
        if(mp.find(s[i])==mp.end()){
            ans.push_back(s[i]);
            mp[s[i]]++;
        }
    }
    cout<<ans;
}