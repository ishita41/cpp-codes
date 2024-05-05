#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int s = 0, e = n - 1, mid = 0;
    while(mid <= e) {
        if(a[mid] == 0) {
            swap(a[mid], a[s]);
            mid++;
            s++;
        }
        else if(a[mid] == 1) {
            mid++;
        }
        else {
            swap(a[mid], a[e]);
            e--;
        }
    }
   
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
