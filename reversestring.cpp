#include<iostream>
#include<vector>
using namespace std;
void reversestring(string &s){
    int n = s.size();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }
   
}
int main(){
    string s;
    cin>>s;
    reversestring(s);
    cout<<s;
}