#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);  // Use vector instead of array
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int idx = -1;
    for(int i = n - 2; i >= 0; i--){
        if(a[i] < a[i + 1]){
            idx = i;
            break;
        }
    }

    if(idx == -1) {
        reverse(a.begin(), a.end());  // If no next permutation, reverse the entire array
    } else {
        // Find the smallest element greater than a[idx] to the right
        for(int i = n - 1; i > idx; i--){
            if(a[i] > a[idx]){
                swap(a[i], a[idx]);
                break;
            }
        }
        reverse(a.begin() + idx + 1, a.end());  // Reverse the part after idx
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
