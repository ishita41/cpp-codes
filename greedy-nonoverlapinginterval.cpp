#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    sort(a.begin(), a.end());
    int count=1;
    int last=a[0][1];
    for(int i=1;i<n;i++){
        if(a[i][0]>=last){
            count++;
            last=a[i][1];
        }
    }
    cout<<n-count;
}