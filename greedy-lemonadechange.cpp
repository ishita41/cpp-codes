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
    bool check=true;
    int five=0,ten=0;
    for(int i=0;i<n;i++){
        if(a[i]==5){
            five++;
        }
        else if(a[i]==10){
            if(five==0) check=false;
            ten++;
            five--;
        }
        else{
            if(ten>0 && five>0){
                ten--;
                five--;
            }
            else if(five>=3){
                five-=3;
            }
            else{
                check=false;
            }
        }
        
    }
    if(check) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
}