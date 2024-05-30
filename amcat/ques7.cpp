#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=s.size();i>=0;i--){
        cout<<s[i];
    }
}