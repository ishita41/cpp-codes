#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string line;
    getline(cin, line); // Corrected the function name to getline
    string res;
    for(int i = 0; i < line.size(); i++) {
        if(line[i] == 'a' || line[i] == 'e' || line[i] == 'o' || line[i] == 'u' || line[i] == 'i' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U') {
            continue;
        }
        res += line[i];
    }

    cout << res; // Print the modified string res

    return 0;
}
