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
    int left=0,right=n-1;
    int maxleft=0,maxright=0;
    int res=0;
    while(left<=right){
        if(a[left]<=a[right]){
            if(a[left]>=maxleft){
            maxleft=a[left];
            }
        
        else{
            res+=maxleft-a[left];
        }
        left++;
        }
        else{
            if(a[right]>maxright){
                maxright=a[right];
            }
            else{
                res+=maxright-a[right];
            }
            right--;
        }
    }
    cout<<res<<endl;
}