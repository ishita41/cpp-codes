#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int majority, count = 0;
        
        for (int i = 0; i < n; i++) {
            if (count == 0) {
                majority = a[i];
                count = 1;
            } else {
                if (majority == a[i]) {
                    count++;
                } else {
                    count--;
                }
            }
        }
        
        int counter = 0;
        
        if (count > 0) {
            for (int i = 0; i < n; i++) {
                if (majority == a[i])
                    counter++;
            }
        }
        
        if (counter > n / 2) {
            cout << "YES " << majority << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}