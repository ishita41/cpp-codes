#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int k;
    cin >> k;
    
    vector<int> temp(n);
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = a[i];
    }
    
    for (int i = 0; i < n; i++) {
        a[i] = temp[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
