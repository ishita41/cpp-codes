#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans=0;
    int cur=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            cur++;
            ans=max(ans,cur);
        }
        else if(s[i]==')'){
            cur--;
        }
    }
    cout<<ans<<endl;
}