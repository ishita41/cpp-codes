#include<iostream>
#include<vector>
using namespace std;
void printname(int n){
    if(n<0) return;
    cout<<"ishita"<<endl;
    printname(n-1);
}
int main(){
    int n=10;
    printname(n);
}