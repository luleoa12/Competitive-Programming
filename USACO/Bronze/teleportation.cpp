// July 8, 2025
// USACO 2018 February Contest, Bronze
// Problem 1. Teleportation

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

using namespace std;


int main() {   
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout); 
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    cout << min({abs(b-a), abs(a-x)+abs(b-y), abs(a-y)+abs(b-x)}) << endl;
    return 0;
}

