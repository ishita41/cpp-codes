#include<iostream>
#include<vector>
#include<string>
using namespace std;
void tolowercase(string &s){
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch>='A' && ch<='Z'){
            ch=ch-('A'-'a');
            s[i]=ch;
        }
    }
}
bool check(string s){
    tolowercase(s);
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(!isalnum(s[i]))
        {
            i++;
        }
        else if(!isalnum(s[j])){
            j--;
        }
        else if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
}
int main(){
    string s;
    getline(cin,s);
    if(check(s)) cout<<"yes";
    else
    cout<<"no";
}