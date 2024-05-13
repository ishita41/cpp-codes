#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(int idx, vector<int>& ans, int a[], int n) {
    if (idx == n) {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;  // Added newline after printing subset
        return;  // Added return statement for base case
    }
     //not pick
    print(idx + 1, ans, a, n);
    //pick
    ans.push_back(a[idx]);
    print(idx + 1, ans, a, n);
    ans.pop_back();
   
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> ans;
    print(0, ans, a, n);
    return 0;
}
//tc =o(2^n*n) sc=o(n);