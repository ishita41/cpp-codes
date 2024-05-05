#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int profit=0;
        int buy=a[0];
    for(int i=0;i<n;i++){
        
        if(buy>a[i]){
            buy=a[i];
        }
        else if(a[i]-buy>profit) profit=a[i]-buy;
    }
    cout<<profit<<endl;
}