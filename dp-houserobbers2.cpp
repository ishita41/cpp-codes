#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rob(vector<int>& a) {
    int n = a.size();
    if (n == 0) return 0;
    if (n == 1) return a[0];

    int prev1 = 0;
    int prev2 = a[0];

    for (int i = 1; i < n; i++) {
        int inc = prev1 + a[i];
        int exc = prev2;
        int ans = max(inc, exc);
        prev1 = prev2;
        prev2 = ans;
    }

    return prev2;
}

int solve(vector<int>& a) {
    int n = a.size();
    if (n == 0) return 0;
    if (n == 1) return a[0];

    vector<int> take_first(a.begin(), a.end() - 1);
    vector<int> take_last(a.begin() + 1, a.end());

    int ansfirst = rob(take_first);
    int anslast = rob(take_last);

    return max(ansfirst, anslast);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << solve(a) << endl;
    return 0;
}
