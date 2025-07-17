// July 16, 2025
// USACO 2019 December Contest, Bronze
// Problem 3. Livestock Lineup

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

const vector<string> COWS = []() {
    vector<string> tmp{"Bessie", "Buttercup", "Belinda", "Beatrice",
	                   "Bella",  "Blue",      "Betsy",   "Sue"};
    sort(begin(tmp), end(tmp));
    return tmp;
}();

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);

    int n;
    cin>>n;
    vector<vector<int>> neighbors(COWS.size());
    map<string, int> cow_inds;
    for (int i=0; i<COWS.size(); i++) {
        cow_inds[COWS[i]] = i;
    }
    for (int i=0;i<n; i++) {
        string cow1;
        string cow2;
        string trash;
        cin>>cow1>>trash>>trash>>trash>>trash>>cow2;
        int c1 = cow_inds[cow1];
        int c2 = cow_inds[cow2];
        neighbors[c1].push_back(c2);
        neighbors[c2].push_back(c1);
    }
    vector<int> order;
    vector<bool> added(COWS.size());

    for (int c=0; c<COWS.size(); c++) {
        if (!added[c] && neighbors[c].size()<=1) {
            added[c] = true;
            order.push_back(c);

            if (neighbors[c].size()==1) {
                int prev=c;
                int at = neighbors[c][0];
                while (neighbors[at].size() == 2) {
                    added[at] = true;
                    order.push_back(at);

                    int a=neighbors[at][0];
                    int b=neighbors[at][1];
                    int temp_at = a == prev ? b : a;
                    prev = at;
                    at=temp_at;
                }
                added[at] = true;
                order.push_back(at);

            }
        }
    }
    for (int c : order) {
        cout << COWS[c] << endl;
    }

    return 0;
}

