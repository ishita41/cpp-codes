#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class heap{
    public:
    int size=0;
    int a[100];
    heap(){
        size=0;
    }
    void heapify(int a[],int n,int i){
        int smallest=i;
        int leftchild=2*i+1;
        int rightchild=2*i+2;
        if(leftchild<n && a[smallest]>a[leftchild]){
            smallest=leftchild;
        }
        if(rightchild<n && a[rightchild]<a[smallest]){
            smallest=rightchild;
        }
        if(smallest!=i){
            swap(a[smallest],a[i]);
            heapify(a,n,smallest);
        }
    }
    void buildheap(int a[],int n){
        size=n;
        for(int i=(n/2)-1;i>=0;i--){
            heapify(a,n,i);
        }
    }
    void printheap(int a[]){
        for(int i=0;i<size;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    heap h;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    h.buildheap(a,n);
    h.printheap(a);
}