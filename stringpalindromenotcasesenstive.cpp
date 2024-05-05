#include<iostream>
#include<vector>
#include<string>
using namespace std;
char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool palindrome(string s){
    int l=0;
    int h=s.length();
    while(h<=l){
        if(tolowercase(s[l])!=tolowercase(s[h])){
            return false;
        }
        else{
            l++;
            h--;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    cout<<palindrome(s);
}