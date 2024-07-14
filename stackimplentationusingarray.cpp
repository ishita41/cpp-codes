#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class stack{
    public:
    int *a;
    int size;
    int top;
    stack(){
        top=-1;
        size=1000;
        a=new int[size];
    }
    void push(int x){
        top++;
        a[top]=x;
    }
    int pop(){
        int x=a[top];
        top--;
        return x;
    }
    int gettop(){
        return a[top];
    }
    int getsize(){
        return top+1;
    }
};
int main(){
    stack ob;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ob.push(x);
    }
    cout<<ob.gettop()<<endl;
}
