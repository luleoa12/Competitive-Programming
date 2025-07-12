// July 10, 2025
// USACO 2018 December Contest, Bronze
// Problem 1. Mixing Milk

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

    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    int c,m;
    vector<int> capacity(3);
    vector<int> milk(3);
    for(int i=0;i<3;i++) {
        cin>>c>>m;
        capacity[i] = c;
        milk[i] = m;
    }

    for (int i=0;i<100;i++) {
        int x=i%3;
        int y=(i+1)%3;
        
        int amount = min(milk[x], capacity[y]-milk[y]);
        milk[x] -= amount;
        milk[y] += amount;
    }
    for (int i=0; i<3; i++) {
        cout << milk[i] << endl;
    }
    return 0;
}

