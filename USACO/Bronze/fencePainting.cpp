// July 7, 2025
// USACO 2015 December Contest, Bronze
// Problem 1. Fence Painting


#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cstdio>

using namespace std;


int main() {    
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    vector<bool> cover(100);
    for (int i=a; i<b; i++) {
        cover[i] = true;
    }
    for (int i=c; i<d; i++) {
        cover[i] = true;
    }

    int ans = 0;
    for (int i=0; i<100; i++) {
        ans += cover[i];
    }
    cout << ans << endl;
    return 0;
}

