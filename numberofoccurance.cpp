#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    cin >> x;

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    int count = 0;

   for(int i=0;i<n;i++){
    if(a[i]==x){
        count++;
    }
   }
    cout << count << endl;
    return 0;
}
