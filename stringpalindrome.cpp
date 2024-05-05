#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int l = 0, e = s.size() - 1; 
    bool isPalindrome = true; 
    while (l < e) {
        if (s[l] != s[e]) {
            isPalindrome = false; 
            break; 
        }
        l++;
        e--;
    }
    if (isPalindrome) {
        cout << "yes" << endl; 
    } else {
        cout << "no" << endl; 
    }
    return 0;
}
