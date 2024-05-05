#include <iostream>
#include <vector>
using namespace std;
int main(){
   vector<int> a = {1, 1, 2, 3, 3};
   int idx=1;
   int count=1;
   for(int i=1;i<a.size();i++){
       if(a[i-1]==a[i])
       {
           count++; 
       }
       else{
           count=1;
       }
       if(count<=2){
           a[idx++]=a[i];
       }
   }
   cout<<idx;
    return 0;
}

