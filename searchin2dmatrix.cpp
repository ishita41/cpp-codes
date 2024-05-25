#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int t;
    cin>>t;
    int s=0;
    int e=m-1;
    bool found=false;
    while(s<n && e<m){
        if(a[s][e]==t){
            found=true;
            cout<<s<<" "<<e<<endl;
            break;
        }
        else if(a[s][e]>t){
            e--;
        }
        else{
            s++;
        }
    }
}