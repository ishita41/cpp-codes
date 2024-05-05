#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    vector<int> pos;
    vector<int> neg;
    for(int i = 0; i < n; i++){
        if(a[i] > 0)
            pos.push_back(a[i]);
        else
            neg.push_back(a[i]);
    }
    
    for(int i = 0; i < n / 2; i++){ // beacuse there are n/ positive elements
        a[2 * i] = pos[i];
        a[2 * i + 1] = neg[i];
    }
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}

// tc = o(n+logn)
//sc=o(n)
