// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main() {
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
    for(int i=0;i<m;i++){
        s.insert(b[i]);
    }
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"size is"<<s.size();

    return 0;
}