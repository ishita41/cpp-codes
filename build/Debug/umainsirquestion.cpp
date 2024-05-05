/*Noddy chooses a city for Advertising his company's product. There are S streets in that city. Each day he travels one street. There are N buildings in a street which are located at points 1,2,3....N(respectively). Each building has some height(Say h meters).
Noddy stands at point 0. His height is 0.5m. Now he starts communicating with the people of each building. He can communicate with people of a particular building only if he can see that building. If he succeed to communicate with any particular building then his boss gives hi m R rupees. i.e. if he communicates with K buildings in a day, then he will earn K times R rupees. Now Noddy wants to know his maximum Earning for each day.
Note: All the points are on Straight Line and Noddy is always standing at point 0.

2
6 3                                    
8 2 3 11 11 10
5 12
12 20 39 45 89*/

#include <iostream>
#include <vector>

using namespace std;

int maxEarnings(int S, int N, vector<int>& heights, int R) {
    int max_height_seen = 0;
    int earnings = 0;

    for (int i = 0; i < N; ++i) {
        if (heights[i] > max_height_seen + 0.5) { // Check if Noddy can see the building
            max_height_seen = heights[i];
            earnings += R;
        }
    }

    return earnings;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int S, N, R; // Number of streets, number of buildings, earnings per building
        cin >> S >> N >> R;
        vector<int> heights(N);
        for (int i = 0; i < N; ++i) {
            cin >> heights[i];
        }
        cout << maxEarnings(S, N, heights, R) << endl;
    }

    return 0;
}
