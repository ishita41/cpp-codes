#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void addedge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void dfs(vector<int>adj[],int node,int vis[]){
    vis[node]=1;
    cout<<node<<" ";
    for(auto it : adj[node]){
        if(!vis[it]){
            vis[it]=1;
            dfs(adj,it,vis);
        }
    }
}
void solve(vector<int>adj[],int v){
    int start=0;
    int vis[v]={0};
    dfs(adj,start,vis);
}
int main(){
    int v,e;
    cin>>v>>e;
    vector<int>adj[v];
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        addedge(adj,u,v);
    }
    solve(adj,v);
}