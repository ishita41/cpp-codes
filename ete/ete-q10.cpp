#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    int idx=s.find(t);
    if(idx!=string::npos){
        cout<<idx<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}