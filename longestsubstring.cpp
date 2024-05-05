#include<iostream>
#include<set>
#include<algorithm> // for max function
using namespace std;

int lengthstring(string s){
    set<char> st;
    int maxlength = 0;
    int l = 0, r = 0;
    while(r < s.length()){
        if(st.find(s[r]) == st.end()) {
            st.insert(s[r]);
            r++;
            maxlength = max(maxlength, r - l);
        }
        else {
            st.erase(s[l]);
            l++;
        }
    }
    return maxlength;
}

int main() {
    string s;
    cin >> s;
    int ans = lengthstring(s);
    cout << ans;
    return 0;
}
