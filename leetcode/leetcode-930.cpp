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
    int goal;
    cin>>goal;
     if(goal < 0)    return 0;
        
    int l=0,r=0,count=0,sum=0;
    while(r<n){
        sum+=a[r];
        while(sum>goal){
            sum-=a[l];
            l++;
        }
        count+=(r-l+1);
        r++;
    }
    cout<<count<<endl;
}