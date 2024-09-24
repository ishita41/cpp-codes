#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int>mp;
    mp['I']=1;
    mp['V']=5;
    mp['C']=100;
    mp['X']=10;
    mp['L']=50;
    mp['D']=500;
    mp['M']=1000;
    int ans=mp[s[s.length()-1]];
    for(int i=s.size()-2;i>=0;i--){
        if(mp[s[i]]<mp[s[i+1]]){
            ans-=mp[s[i]];
        }
        else{
            ans+=mp[s[i]];
        }
    }
    cout<<ans;
}