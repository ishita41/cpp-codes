#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<26;i++){
        char ch=s[i];
        int num=0;
        if(ch>='a' && ch<='z'){
            num =ch-'a';
        }
        else{
            num=ch-'A';
        }
        arr[num]++;
    }
    int maxi=-1,ans=-1;
    //find maximum occurance character
    for(int i=0;i<s.length();i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
      char maxChar = 'a' + ans; // Convert index back to character
    cout << "Maximum occurring character: " << maxChar << endl;

}
