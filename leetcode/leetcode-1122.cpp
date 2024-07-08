#include<iostream>
#include<vector>
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
    vector<int> freq(1001, 0);
    for(int i : a) {
        freq[i]++;
    }

    int idx = 0;
    for(int j : b) {
        while(freq[j] > 0) {
            a[idx++] = j;
            freq[j]--;
        }
    }

    for(int i = 0; i < freq.size(); i++) {
        while(freq[i] > 0) {
            a[idx++] = i;
            freq[i]--;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
