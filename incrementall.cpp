/*Om gave Satyam an array of N integers. He asked Satyam to tell minimum number of operations in which all the elements of the array can be made equal.

In a single operation he can increment N-1 elements of the array by 1.

Can you help Satyam in finding the minimum number of operations?

Input Format
First line contains a single integer N that denotes the size of the array. The second line contains N spaced integers which represent the elements of the array.

Constraints
1<=N<=105
10-9<=A[i]<=109

Output Format
Print the minimum moves required to make all the array elements equal using the given operation.

Sample Input
3
1 2 3
Sample Output
3
Explanation
In each operation 2 elements of the array are incremented.
[1,2,3]->[2,3,3]->[3,4,3]->[4,4,4]
Hence total 3 moves are required.*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>  
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mini = a[0]; 
    for(int i = 1; i < n; i++) {  
        mini = min(mini, a[i]);
    }

    long sum = 0;
    for(int i = 0; i < n; i++) {
        sum += abs(a[i] - mini);  
    }

    cout << sum << endl; 
    return 0;
}
