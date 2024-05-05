#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for(int j = 0; j < m; j++) {
        cin >> b[j];
    }
    int i = 0, j = 0;
    vector<int> ans;
    while(i < n && j < m) {
        if(a[i] == b[j]) {
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i] > b[j]) {
            j++;
        }
        else {
            i++;
        }
    }
    
    // Print the elements of ans
    for(int k = 0; k < ans.size(); k++) {
        cout << ans[k] << " ";
    }
    return 0;
}
