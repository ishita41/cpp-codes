#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> ans(n,-1);  // Initialize ans with size n
    stack<int> st;
    
    for (int i = 2 * n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= a[i % n]) {
            st.pop();
        }
        if (i < n) {
            if (!st.empty()) ans[i] = st.top();
        }
        st.push(a[i % n]);
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}
