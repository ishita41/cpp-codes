#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(string digit,string output,int idx,vector<string>&ans,string map[]){
    if(idx>=digit.size()){
        ans.push_back(output);
        return ;
    }
    int num=digit[idx]-'0';
    string value=map[num];
    for(int i=0;i<value.size();i++){
        output.push_back(value[i]);
        solve(digit,output,idx+1,ans,map);
        output.pop_back();
    }
}
vector<string>combinatiosn(string digit){
    vector<string>ans;
    if(digit.size()==0) return ans;
    string output;
    int idx=0;
    string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digit,output,idx,ans,map);
    return ans;
}
int main(){
    string digit;
    cin>>digit;
    vector<string>res=combinatiosn(digit);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}