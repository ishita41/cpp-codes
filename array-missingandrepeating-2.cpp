
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int missing = -1, repeating = -1;
    
    int mp[n + 1] = {0};  
    for(int i = 0; i < n; i++) {
        mp[a[i]]++;
    }
    
    for(int i = 1; i <= n; i++) {
        if(mp[i] == 0) {
            missing = i;
        } else if(mp[i] == 2) {
            repeating = i;
        }
        
        if(missing != -1 && repeating != -1) {
            break;
        }
    }
    
    cout << repeating << " " << missing << endl;
    
    return 0;
}

