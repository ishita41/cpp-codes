#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string str="";
    stack<string>st;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            if(!str.empty()){
                st.push(str);
            }
        }
        else{
            str+=s[i];
        }
    }
    if(!str.empty()){
        st.push(str);
    }
    string ans="";
    while(!str.empty()){
        ans+=st.top();
        st.pop();

    if(!st.empty()){
        ans+=" ";
    }
    }
    cout<<ans<<endl;
}