#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int target;
    cin >> target;
    vector<int> ans;
    sort(a, a + n);
    for(int i = 0; i < n; i++) {
        if(i > 0 && a[i] == a[i - 1]) continue;
        for(int j = i + 1; j < n; j++) {
            if(j > i + 1 && a[j] == a[j - 1]) continue;
            int k = j + 1;
            int l = n - 1;
            while(k < l) {
                int sum = a[i] + a[j] + a[k] + a[l];
                if(sum == target) {
                    ans.push_back(a[i]);
                    ans.push_back(a[j]);
                    ans.push_back(a[k]);
                    ans.push_back(a[l]);
                    k++;
                    l--;
                    while(k < l && a[k] == a[k - 1]) k++;
                    while(k < l && a[l] == a[l + 1]) l--;
                }
                else if(sum < target) k++;
                else l--;
            }
        }
    }
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
