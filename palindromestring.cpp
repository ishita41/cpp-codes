#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool ans=true;
    int low=0,high=s.length()-1;
    while(low<=high){
        if(s[low]!=s[high])
        {
            ans=false;
            break;
          
        }
       low++;
       high--;
    }
    if(ans) cout<<"yes";
    else cout<<"no";
}