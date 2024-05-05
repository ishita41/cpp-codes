#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int count=0;
    char name[]="ishita";
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    cout<<count;
    int s=0;
    int e=count-1;
    while(s<=e){
       swap(name[s++],name[e--]);
    }
    cout<<name<<" ";
}