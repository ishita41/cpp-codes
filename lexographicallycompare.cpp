#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    if(lexicographical_compare(s.begin(),s.end(),t.begin(),t.end())){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}