#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int trap(int a[],int n){
    stack<int>st;
    int left=0;
    int right=n-1;
    int res=0;
    int leftmax=0,rightmax=0;
    while(left<=right){
        if(a[left]<=a[right]){
            if(leftmax<=a[left])
            leftmax=a[left];
            else {res+=leftmax-a[left];
            left++;
            }
        }
        else{
           if(rightmax<=a[right])
            rightmax=a[right];
            else{
                res+=rightmax-a[right];
                right--;
            }
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<trap(a,n);
}