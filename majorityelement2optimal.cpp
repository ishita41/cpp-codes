#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 0) return 0; 

    int ele1 = 0, ele2 = 1, count1 = 0, count2 = 0;

    for(int i = 0; i < n; i++) {
        if (a[i] == ele1) {
            count1++;
        } else if (a[i] == ele2) {
            count2++;
        } else if (count1 == 0) {
            ele1 = a[i];
            count1 = 1;
        } else if (count2 == 0) {
            ele2 = a[i];
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }

    
    count1 = count2 = 0;
    for(int i = 0; i < n; i++) {
        if (a[i] == ele1) count1++;
        if (a[i] == ele2) count2++;
    }

    vector<int> ans;
    if (count1 > n / 3) ans.push_back(ele1);
    if (count2 > n / 3) ans.push_back(ele2);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
