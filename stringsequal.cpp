/*You are given two strings s1 and s2, both of length n, consisting of lowercase English letters.

You can apply the following operation on any of the two strings any number of times:

Choose any two indices i andj such that i < j and the difference j - i is even, then swap the two characters at those indices in the string.
Return true if you can make the strings s1 and s2 equal, and false otherwise.

Example 1:

abcdba cabdab
Input
True
Output
Example 2:

abe bea
Input
False
Output
Explaination:

In the first example,
We can apply the following operations on s1:

Choose the indices i = 0, j = 2. The resulting string is s1 = "cbadba".
Choose the indices i = 2, j = 4. The resulting string is s1 = "cbbdaa".
Choose the indices i = 1, j = 5. The resulting string is s1 = "cabdab" = s2.
In the second example,
It is not possible to make the two strings equal.

Constraints:

n == s1.length == s2.length
1 <= n <= 105
s1 and s2 consist only of lowercase English letters.
Input Format:

Two strings s1 and s2 of equal length consisting only lowercase English letters.

Output Format:

A boolean value indicating whether you can make s2 equal to s1 by performing above operation on s2.*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    if (s1.size() != s2.size()) {
        cout << "False" << endl;
        return 0;
    }
    
    vector<char> s1_even, s1_odd, s2_even, s2_odd;
    
    for (int i = 0; i < s1.size(); ++i) {
        if (i % 2 == 0) {
            s1_even.push_back(s1[i]);
            s2_even.push_back(s2[i]);
        } else {
            s1_odd.push_back(s1[i]);
            s2_odd.push_back(s2[i]);
        }
    }
    
    sort(s1_even.begin(), s1_even.end());
    sort(s1_odd.begin(), s1_odd.end());
    sort(s2_even.begin(), s2_even.end());
    sort(s2_odd.begin(), s2_odd.end());
    
    if (s1_even == s2_even && s1_odd == s2_odd) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}
