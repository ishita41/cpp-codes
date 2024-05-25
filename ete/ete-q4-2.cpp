#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            if(s[i]!='z'){
                s[i]+=1;
            }
        }
        else{
            if(s[i]!='a'){
                s[i]-=1;
            }
        }
    }
    cout<<s<<endl;
}