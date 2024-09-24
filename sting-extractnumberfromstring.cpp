#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int num=0;
    int ans=0;
    for (int i = 0; i <= s.size(); i++) {
        if(s[i]>='0' && s[i]<'9'){
            num=num*10+s[i]-'0';
            ans=max(ans,num);
        }
        else{
            num=0;
        }
    }
    cout<<ans<<endl;
}