#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    bool swapped;
    for(int i = 0; i < n - 1; i++) {
        swapped = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = true;
            }
        }
        // If no two elements were swapped in the inner loop, then the array is already sorted
        if(!swapped) {
            break;
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
