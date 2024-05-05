#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count=0;
    char name[]="ishita";
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    cout<<count;
}