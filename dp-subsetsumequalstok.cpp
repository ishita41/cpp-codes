#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum;
    cin >> sum;
    vector<bool> curr(sum + 1, false);
    vector<bool> prev(sum + 1, false);
    prev[0] = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= sum; j++){
            bool take = false;
            bool nottake = prev[j];
            if(a[i] <= j){
                take = prev[j - a[i]];
            }
            curr[j] = take || nottake;
        }
        prev = curr;
    }
    cout << prev[sum] << endl;
    return 0;
}