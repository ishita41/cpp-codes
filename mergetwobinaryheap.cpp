
#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int>& a, int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if(left < n && a[largest] < a[left]) {
        largest = left;
    }
    if(right < n && a[largest] < a[right]) {
        largest = right;
    }
    if(largest != i) {
        swap(a[largest], a[i]);
        heapify(a, n, largest);
    }
}

vector<int> merge(int a[], int b[], int n, int m) {
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        ans.push_back(a[i]);
    }
    for(int i = 0; i < m; i++) {
        ans.push_back(b[i]);
    }
    int nn = ans.size();
    for(int i = nn/2; i >= 0; i--) {
        heapify(ans, nn, i);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    vector<int> merged = merge(a, b, n, m);
    for(int num : merged) {
        cout << num << " ";
    }
    
    return 0;
}

