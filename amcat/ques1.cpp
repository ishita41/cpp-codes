#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    for(int j=0;j<m;j++){
        s.insert(b[j]);
    }
    int sum=0;
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
       
        sum+=*it;
    
    }
     cout<<endl;
    cout<<sum<<endl;
}