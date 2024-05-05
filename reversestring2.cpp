#include<iostream>
#include<vector>
#include<string>
using namespace std;
string reverse(string s){
    string result;
    int i=0;
    int n = s.length();
    while(i<n){
        while(i<n && s[i]==' '){
            i++;
        }
       int j=i+1;
       while(j<n && s[j]!=' ') j++;
       string sub=s.substr(i,j-i);
       if(result.length()==0) result=sub;
       else result =sub+" "+result;
       i=j;
    }
    return result;
}
int main(){
    string s;
    getline(cin,s);
    cout<<reverse(s);
}