#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
private:
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return true;
        }
        
        return false;
    }
    
    char toLowerCase(char ch) {
        if ((ch >='a' && ch <='z') || (ch >='0' && ch <='9')) {
            return ch;
        } else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    
    bool checkPalindrome(string a) {
        int s = 0;
        int e = a.length() - 1;

        while (s <= e) {
            if (a[s] != a[e]) {
                return false;       
            } else {
                s++;
                e--;
            }
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        string temp = "";
        
        // Remove non-alphanumeric characters
        for (int j = 0; j < s.length(); j++) {   
            if (valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
        // Convert to lowercase
        for (int j = 0; j < temp.length(); j++) { 
            temp[j] = toLowerCase(temp[j]);
        }
        
        // Check palindrome
        return checkPalindrome(temp);
    }
};

int main() {
    Solution solution;

    // Test cases
    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    
    cout << "Test 1: " << (solution.isPalindrome(test1) ? "Palindrome" : "Not Palindrome") << endl;
    cout << "Test 2: " << (solution.isPalindrome(test2) ? "Palindrome" : "Not Palindrome") << endl;
    
    return 0;
}
