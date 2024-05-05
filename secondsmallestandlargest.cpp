#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int secondlargest(int a[],int n){
    int largest=a[0];
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
            slargest=largest;
        }
        else if(a[i]<largest && a[i]>slargest){
            slargest=a[i];
        }
    }
    return slargest;
}
int secondsmallest(int a[],int n){
    int smallest=a[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
        ssmallest=smallest;
        smallest=a[i];
        }
        else if(a[i]<ssmallest){
            ssmallest=a[i];
        }
    }
    return ssmallest;
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<secondlargest(a,n);
    cout<<secondsmallest(a,n);
}