#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    map<char,int>mp;
    int l=0,r=0,maxlen=0;
    while(r<s.size()){
        mp[s[r]]++;
        if(mp.size()==k){
            maxlen=max(maxlen,r-l+1);
        }
        if(mp.size()>k){
            while(mp.size()>k){
                mp[s[l]]--;
                if(mp[s[l]]==0) mp.erase(s[l]);
                l++;
            }
        }
        r++;
    }
    if(maxlen==0) cout<<-1<<endl;
    cout<<maxlen<<endl;
}