#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=s.size()-1;i>=0;i--){
        if((s[i]-'0')%2==1){
            cout<<s.substr(0,i+1);
            return 0;
        }
    }
    cout<<""<<endl;
}