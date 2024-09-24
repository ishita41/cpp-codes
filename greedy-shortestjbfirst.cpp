#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int wt = 0, time = 0;
    for(int i = 0; i < n; i++){
        time += wt;
        wt += a[i];
    }
    cout << (time) / n << endl;
    return 0;
}
