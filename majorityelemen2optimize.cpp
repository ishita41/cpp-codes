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
    
    int nums1 = -1, nums2 = -1, count1 = 0, count2 = 0;
    
    for(int i = 0; i < n; i++) {
        if(a[i] == nums1)
            count1++;
        else if(a[i] == nums2)
            count2++;
        else if(count1 == 0) {
            nums1 = a[i];
            count1++;
        }
        else if(count2 == 0) {
            nums2 = a[i];
            count2++;
        }
        else {
            count1--;
            count2--;
        }
    }
    
    vector<int> ans;
    count1 = count2 = 0;
    
    for(int i = 0; i < n; i++) {
        if(a[i] == nums1) {
            count1++;
        }
        else if(a[i] == nums2) {
            count2++;
        }
    }
    
    if(count1 > n / 3)
        ans.push_back(nums1);
    
    if(count2 > n / 3)
        ans.push_back(nums2);
    
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}
