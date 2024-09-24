#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> prime(n + 1, 1);
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = 0;
            }
        }
    }
    vector<int> ans;
    for (int i = 2; i <= n; i++) {
        if (prime[i] && n % i == 0) {
            ans.push_back(i);
        }
    }
   
    if (ans.size() >= 2) {
        for (int i = 0; i < 2; i++) {
            cout << ans[i] << " ";
        }
    } else {
        cout << "Less than 2 prime factors found" << endl;
    }
    return 0;
}
