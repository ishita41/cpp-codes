#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void addedge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bool dfs(int node,int parent,int vis[],vector<int>adj[]){
    vis[node]=1;
    for(int i=0;i<adj[node].size();i++){
        int child=adj[node][i];
        if(!vis[child]){
            if(dfs(child,node,vis,adj)==true) return true;
            else if(child!=parent) return true;
        }
        return false;
    }
}
bool cycle(vector<int>adj[],int v){
    int vis[v]={0};
    for(int i=0;i<v;i++){
        if(!vis[v]){
            if(dfs(i,-1,vis,adj)==true)
            return true;
        }
    }
    return false;
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
    bool ans = cycle(adj,v);
    if(ans) cout<<"cycle";
    else cout<<"not cycle";
}