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
    if(n==0) {
    cout<<0<<endl; 
    return 0;
    }
    int longest=1;
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for(auto it : st){
        if(st.find(it-1)==st.end()){
            int count=1;
            int x=it;
        
        while(st.find(x+1)!=st.end()){
            x=x+1;
            count++;
        }
        longest=max(longest,count);
        }
       
    }
     cout<<longest<<endl;
}