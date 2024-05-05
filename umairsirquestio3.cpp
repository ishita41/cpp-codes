/*You are given an array in which first n natural numbers are inserted. You need to perform following operation:

Starting from 0th index discard every alternative element.
Perform above operation till you get single element remaining in the array. Find the sum of all discarded elements. Try to come up with an approach of O(n).

Input 
7
Output
24*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int josephus(int n,int k){
    if(n==1) return 1;
    return (josephus(n-1,k)+k)%n;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int ans=josephus(n,k);
    cout<<ans;
}