 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){ // 1 based indexing
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
    
    }
 }
 