#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int min=0,max=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            max++;
            min++;
        }
        else if(s[i]==')'){
            max--;
            min--;
        }
        else{
            max++;
            min--;
        }
        if(min<0) min=0;
        if(max<0) cout<<"no"<<endl;
        else{
            cout<<"yes"<<endl;
        }
    }
}