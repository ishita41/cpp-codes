#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     int prev1=0;
        int prev2=a[0];
        for(int i=1;i<n;i++){
           int inc=prev1+a[i];
           int exe=prev2+0;

           int ans=max(inc,exe);
           prev1=prev2;
           prev2=ans;
}
cout<<prev2<<endl;
}