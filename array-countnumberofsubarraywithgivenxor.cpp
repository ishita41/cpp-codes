#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    int count = 0;
    for(int i = 0; i < n; i++){
        int xorr = 0; // Reset xorr for each new starting index
        for(int j = i; j < n; j++){
            xorr ^= a[j];
            if(xorr == k) count++;
        }
    }
    cout << count << endl;
}
