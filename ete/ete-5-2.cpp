#include<iostream>
#include<vector>
#include<string>
using namespace std;

int countways(string s) {
    int n = s.size();
    vector<int> ans(n, 0);
    ans[0] = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] != '0') {
            ans[i] += ans[i - 1];
        }

        if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6')) {
            if (i == 1) {
                ans[i] += ans[i - 1];
            }
            ans[i] += ans[i - 2];
        }
    }

    return ans[n - 1];
}

int main() {

        string s;
        cin >> s;
        cout << countways(s) << endl; 

  
}
