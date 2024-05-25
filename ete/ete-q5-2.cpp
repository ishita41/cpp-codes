#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<map>
using namespace std;
int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    istringstream iss(s);
    string ans;
    map<string,int>mp;
    while(iss>>ans){
        mp[ans]++;
    }
    cout<<mp[t]<<endl;
}