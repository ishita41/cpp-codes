#include<iostream>
#include<vector>
using namespace std;
bool checkpalindrome(string s,int i){
     int n=s.size();
     if(i>=n/2) return true;
     if(s[i]!=s[n-i-1]) return false;
     return checkpalindrome(s,i+1);
}
int main(){
    string s;
    cin>>s;
    cout<<checkpalindrome(s,0);
    
}