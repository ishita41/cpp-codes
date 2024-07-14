#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=0,r=0,len=0;
    int n=s.size();
    vector<int>ans(256,-1);
    while(r<n){
        if(ans[s[r]]!=-1){
            l=max(ans[s[r]]+1,l);
        }
            ans[s[r]]=r;
            len=max(len,r-l+1);
            r++;
        }
        cout<<len<<endl;
}
    