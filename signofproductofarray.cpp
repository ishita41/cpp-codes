/*You are given an array nums of integers. The product of the values in nums is prod and the sign of prod is defined as:

1 if prod is positive.
-1 if prod is negative.
0 if prod is equal to 0.
Return the sign of the product of all the values in the array nums.

Example 1:

7
-1 -2 -3 -4 3 2 1
Input
1
Output
Explaination:

In the given example, the product of all values in the array nums is 144. The sign of 144 is positive, so the output is 1.*/
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
    int prod=1;
    for(int i=0;i<n;i++){
        if(a[i]<0) prod=-prod;
        if(a[i]==0) return 0;
    }
    cout<<prod<<endl;
}
