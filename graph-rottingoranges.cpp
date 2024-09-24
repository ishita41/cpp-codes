#include<iostream>
#include<vector>
#include<queue>
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
    queue<pair<pair<int,int>,int>>q;
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==2){
                q.push({{i,j},0});
                vis[i][j]=2;
            }
            else{
                vis[i][j]=0;
            }
        }
    }
    int tm=0;
    int drow[]={-1,0,+1,0};
    int dcol[]={0,1,0,-1};
    while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        int t=q.front().second;
        q.pop();
        tm=max(tm,t);
        for(int i=0;i<4;i++){
            int nrow=r+drow[i];
            int ncol=c+dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]!=2 && a[nrow][ncol]==1){
                q.push({{nrow,ncol},t+1});
                vis[nrow][ncol]=2;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1 && vis[i][j] != 2) {
                cout<<-1; 
            }
        }
    }
    cout<<tm; 
}