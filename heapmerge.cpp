#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class heap{
public:
    int a[100];
    int size;

    heap(){
        a[0] = -1;
        size = 0;
    }

    void heapify(vector<int>& a, int n, int i){
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && a[left] > a[largest]) {
            largest = left;
        }
        if (right < n && a[right] > a[largest]) {
            largest = right;
        }

        if (largest != i){
            swap(a[largest], a[i]);
            heapify(a, n, largest);
        }
    }

    void merge(vector<int>& a, vector<int>& b, int n, int m){
        vector<int> ans;
        for (int i = 0; i < a.size(); i++){
            ans.push_back(a[i]);
        }
        for (int i = 0; i < b.size(); i++){
            ans.push_back(b[i]);
        }

        int size = ans.size();
        for (int i = size / 2 - 1; i >= 0; i--){
            heapify(ans, size, i);
        }

        for (int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
    }
};

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }

    heap h;
    h.merge(a, b, n, m);
    
    return 0;
}
