/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>
using namespace std;
int fibbo(int n){
   
    int prev1=0;
    int prev2=1;
    // int curr;
    for(int i=2;i<=n;i++){
       int curr =prev1+prev2;
       prev1=prev2;
       prev2=curr;
    }
    return prev2;
}
int main()
{
    int n;
    cin>>n;
  
   cout<<fibbo(n);
    return 0;
}