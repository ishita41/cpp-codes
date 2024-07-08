#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int t;
    cin>>t;
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            a[i][j]+=a[i][j-1];
        }
    }
    int ans=0,sum=0;
    for(int s=0;s<n;s++){
        for(int e=s;e<n;e++){
            map<int,int>mp;
            mp[0]=1;
            int sum=0;
            for(int line=0;line<n;line++){
                if(s>0){
                    sum+=a[line][e]-a[line][s-1];
                }
                else{
                    sum+=a[line][e];
                }
                if(mp.find(sum-t)!=mp.end()){
                    ans+=mp[sum-t];
                }
                mp[sum]++;
            }
        }
    }
    cout<<ans;
}