// July 9, 2025
// USACO 2020 December Contest, Bronze
// Problem 1. Do You Know Your ABCs?

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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> data;
    int x;
    for (int i=0; i<7;i++) {
        cin >> x;
        data.push_back(x);
    }
    sort(data.begin(), data.end());
    cout << data[0] << " " << data[1] << " " << data[6]-data[0]-data[1] << endl;
    return 0;
}

