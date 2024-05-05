#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> dailytemp(int a[], int n) {
    stack<int> st;
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[i] > a[st.top()]) {
            int idx = st.top();
            st.pop();
            ans[idx] = i - idx;
        }
        st.push(i);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> result = dailytemp(a, n);
    for (int temp : result) {
        cout << temp << " ";
    }
    cout << endl;

    return 0;
}
