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
    int maxlen=0;
    for(int i=0;i<n;i++){
        set<int>st;
        for(int j=i;j<n;j++){
            st.insert(a[i]);
            if(st.size()<=2){
                maxlen=max(maxlen,j-i+1);
            }
            else{
                break;
            }
        }
    }
    cout<<maxlen<<endl;
}