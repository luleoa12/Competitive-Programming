// date
// problem

#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cstdio>
#include <numeric>
#include <map>
#include <unordered_map>
#include <sstream>

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n,m;
    cin>>n>>m;
    vector<int> road;
    int length, speed;
    int ans=0;
    for (int i=0; i<n; i++) {
        cin>>length>>speed;
        for (int j=0; j<length; j++) {
            road.push_back(speed);
        }
    }

    int cur=0;
    for (int i=0; i<m; i++) {
        cin>>length>>speed;
        for (int j=cur; j<cur+length; j++) {
            ans = max(ans, speed-road[j]);
        }
        cur += length;
    }
    cout << ans << endl;
    return 0;
}

