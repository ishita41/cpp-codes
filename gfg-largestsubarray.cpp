#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> mp;
    int sum = 0, maxi = 0;

    for(int i = 0; i < n; i++) {
        sum += a[i];

        if(sum == 0) {
            maxi = i + 1;
        } else {
            if(mp.find(sum) != mp.end()) {
                maxi = max(maxi, i - mp[sum]);
            } else {
                mp[sum] = i;
            }
        }
    }

    cout << maxi << endl;
    return 0;
}
