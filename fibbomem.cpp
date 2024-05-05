/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>
using namespace std;
int fibbo(vector<int> &dp,int n){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    else
    
    return dp[n]=fibbo(dp,n-1)+fibbo(dp,n-2);
}
int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
   cout<<fibbo(dp,n);
    return 0;
}