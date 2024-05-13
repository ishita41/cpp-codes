#include <iostream>
#include <vector>
#include <climits> // for INT_MAX
#include <map>
#include <utility> // for pair
#include <algorithm> // for abs

using namespace std;

class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        int minArea = INT_MAX;
        map<pair<int, int>, bool> hash;

        for (const auto& point : points) {
            int x = point[0];
            int y = point[1];
            hash[{x, y}] = true;
        }

        for (int i = 0; i < points.size(); i++) {
            for (int j = i + 1; j < points.size(); j++) {
                int x1 = points[i][0];
                int y1 = points[i][1];
                int x2 = points[j][0];
                int y2 = points[j][1];

                if (x1 == x2 || y1 == y2) continue;

                pair<int, int> p1 = make_pair(x1, y2);
                pair<int, int> p2 = make_pair(x2, y1);

                if (hash.find(p1) != hash.end() && hash.find(p2) != hash.end()) {
                    int area = abs(x2 - x1) * abs(y2 - y1);
                    if (minArea > area) minArea = area;
                }
            } 
        }

        return minArea == INT_MAX ? 0 : minArea;
    }
};

int main() {
    int n;
    cout << "Enter the number of points: ";
    cin >> n;

    vector<vector<int>> points(n, vector<int>(2));
    cout << "Enter the points in the format x y:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> points[i][0] >> points[i][1];
    }

    Solution solution;
    int minArea = solution.minAreaRect(points);
    cout << "Minimum Area Rectangle: " << minArea << endl;
    return 0;
}
