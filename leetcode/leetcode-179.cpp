#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

bool compare(string a, string b) {
    return (a + b) > (b + a);
}

string largeststring(int a[], int n) {
    vector<string> ans;
    
    // Convert each integer in the array to a string and push it into the vector
    for (int i = 0; i < n; i++) {
        ans.push_back(to_string(a[i]));
    }
    
    // Sort the strings based on the custom comparison function
    sort(ans.begin(), ans.end(), compare);
    
    // Concatenate the sorted strings using a stringstream
    stringstream res;
    for (string s : ans) {
        res << s;
    }
    
    // Convert stringstream to a regular string
    string answer = res.str();
    
    // Handle the edge case where the result could be "00..." (leading zeros)
    if (answer[0] == '0') {
        return "0";
    }
    
    return answer;  // Return the final concatenated string
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Call the largeststring function and print the result
    string result = largeststring(a, n);
    cout << "Largest number: " << result << endl;
    
    return 0;
}
