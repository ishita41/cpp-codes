//tc 0n sc 0n
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class stack{
    public:
    queue<int>q;
    void push(int x){
        int s=q.size();
        q.push(x);
        for(int i=0;i<s;i++){
            q.push(q.front());
            q.pop();
        }
    }
    int pop(){
        int n=q.front();
        q.pop();
        return n;
    }
    int top(){
        return q.front();
    }
    int getsize(){
        return q.size();
    }
};
int main(){
    stack s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    cout<<s.top()<<endl;
    cout<<s.getsize()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.getsize()<<endl;
}
