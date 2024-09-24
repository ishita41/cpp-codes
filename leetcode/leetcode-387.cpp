#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]==1){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}