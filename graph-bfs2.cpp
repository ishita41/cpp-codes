#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
void addedge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void bfst(vector<int>adj[],int n){
    int vis[n]={0};
    vis[0]=1;
    queue<int>q;
    q.push(0);
    vector<int>bfs;
    while(!q.empty()){
        int temp=q.front();q.pop();
        bfs.push_back(temp);
        for(int i=0;i<adj[temp].size();i++){
            int neigh=adj[temp][i];
            if(!vis[neigh]){
                vis[neigh]=1;
                q.push(neigh);
            }
        }
    }
    for(int i=0;i<bfs.size();i++){
        cout<<bfs[i]<<" ";
    }
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
    bfst(adj,v);
}