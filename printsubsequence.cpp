#include <iostream>
#include <vector>
using namespace std;

void print(int idx, int arr[], vector<int>& ds, int n) {
    if (idx == n) {
        for (auto it : ds) {
            cout << it << " ";
        }
        if(ds.size()==0) cout<<"{}";
        cout << endl;
        return;
    }
    ds.push_back(arr[idx]);
    print(idx + 1, arr, ds, n);
    ds.pop_back();
    //not picked
    print(idx + 1, arr, ds, n);
}

int main() {
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    print(0, arr, ds, n);
    return 0;
}
