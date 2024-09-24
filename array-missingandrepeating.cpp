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
    int missing=-1,repeating=-1;
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[j]==i) count++;
        }
        if(count==2) repeating =i;
        if(count==0) missing=i;
        if(missing!=-1 && repeating!=-1) break;
    }
    cout<<missing<<" "<<repeating<<endl;
}
