#include<iostream>
#include<vector>
#include<algorithm> // For sorting
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    vector<int> ans;
    
    // Read input array
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n); // Sort the array

    for(int i = 0; i < n; i++) {
        if(i > 0 && a[i] == a[i-1])
            continue;
        int j = i + 1;
        int k = n - 1;
        while(j < k) {
            int sum = a[i] + a[j] + a[k];
            if(sum < 0) {
                j++;
            } else if(sum > 0) {
                k--;
            } else {
                ans.push_back(a[i]);
                ans.push_back(a[j]);
                ans.push_back(a[k]);
                j++;
                k--;
                while(j < k && a[j] == a[j-1]) j++;
                while(j < k && a[k] == a[k+1]) k--;
            }
        }
    }
    
    // Output the result
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}
