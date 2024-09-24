#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int g[n];
    for(int i=0;i<n;i++){
        cin>>g[i];
    }
    int m;
    cin>>m;
    int s[m];
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    int l=0,r=0;
    sort(g,g+n);
    sort(s,s+m);
    while(l<n && r<m){
        if(g[l]<=s[r]){
            l++;
        }
        r++;
    }
    cout<<l<<endl;
}