#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    map<int,int>mp;
    int k;
    cin>>k;
    int xorr=0;
    mp[0]=1;
    for(int i=0;i<n;i++){
        xorr^=a[i];
    
   int x=xorr^k;
   count+=mp[x];
   mp[xorr]++;
    }
   cout<<count<<endl;
}
