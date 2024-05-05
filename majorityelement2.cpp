#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int,int> mp;
    for(int i = 0; i < n; i++) {
        mp[a[i]]++;
    }
    vector<int> ans;
    for(auto it = mp.begin(); it != mp.end(); it++) {
        if(it->second > n / 3) {
            ans.push_back(it->first);
        }
    }
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
