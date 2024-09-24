#include<iostream>
#include<vector>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l=0,r=s.size()-1;
    while(l<r){
        if(!isalnum(s[l])){
            l++;
            continue;
        }
        if(!isalnum(s[r])){
            r++;
            continue;
        }
        if(tolower(s[l])!=tolower(s[r])){
            cout<<"false";
            return 0;
        }
        else{
            l++;
            r--;
        }
    }
    cout<<"true"<<endl;
}