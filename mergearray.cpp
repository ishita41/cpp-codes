#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int i = n - 1;
    int j = m - 1;
    int k = n + m - 1;
    while(i >= 0 && j >= 0) {
        if(a[i] > b[j]) {
            a[k] = a[i];
            i--;
            k--;
        } else {
            a[k] = b[j];
            j--;
            k--;
        }
    }
    while(j >= 0) {
        a[k] = b[j];
        k--;
        j--;
    }
    for(int i = 0; i <= k; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
