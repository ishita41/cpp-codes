#include<iostream>
#include<vector>
#include<set>
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
    int mina=a[0];
    for(int i=0;i<n;i++){
        if(mina>a[i]){
            mina=a[i];
        }
    }
    int minb=b[0];
    for(int i=0;i<m;i++){
        if(minb>b[i]){
            minb=b[i];
        }
    }
    cout<<mina<<" "<<minb;
}
