/*given an array A having N positive integers. Count all the subarrays of A having length X, such that each subarray has no integer greater than K.

Input
First line: Single integer T denoting the number of test cases.
For each test case:
First line: Three space separated integers denoting the value of N, K and, X.
Next line : N single space separated integers denoting the elements of array A.
Constraints:
1 <= T<= 50
1<= N <= 1000000
1 <= A[ i ], K <= 100000
1 <= X <= N

Output
For each test case, print in a new line a single integer denoting the number of subarrays.


Sample Input 1 

1
5 3 2
1 3 2 5 1
Sample Output 1
2
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int size=0;
    int k;
    cin>>k;// KITSE KAM CHAAIYE
    int x;
    cin>>x;// SIZE OF SUBARRAY
    int res;
    for(int i=0;i<n;i++)
    {
        size++;
        if(a[i]>k)
        size=0;
        if(size==x)
        {
            res++;
            size--;
        }
    }
    cout<< res;

}