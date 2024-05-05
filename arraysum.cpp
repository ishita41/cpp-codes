#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> ans;
    while (i >= 0 && j >= 0) {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0) {
        ans.push_back(carry % 10);
        carry /= 10;
    }
    // Reverse the result because we added digits from right to left
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the first number: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the first number digit by digit: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cout << "Enter the size of the second number: ";
    cin >> m;
    vector<int> b(m);
    cout << "Enter the second number digit by digit: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    vector<int> res = sum(a, n, b, m);
    cout << "The sum is: ";
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
