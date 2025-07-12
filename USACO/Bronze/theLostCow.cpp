// July 10, 2025
// USACO 2017 US Open Contest, Bronze
// Problem 1. The Lost Cow

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

    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    int x, y;
    cin>>x>>y;
    int ans=0;
    int direction=1;
    int distance=1;
    while (true) {
        if ((direction==1 && x<=y && y<=x+distance) || (direction==-1 && y<=x && x-distance<=y)) {
            ans += abs(y-x);
            cout << ans << endl;
            break;
        } else {
            ans += distance*2;
            direction *= -1;
            distance *= 2;          
        }
        
    }
    return 0;
}

