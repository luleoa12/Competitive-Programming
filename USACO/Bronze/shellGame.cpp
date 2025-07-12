// July 10, 2025
// USACO 2019 January Contest, Bronze
// Problem 1. Shell Game

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
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n;
    cin>>n;
    vector<int> shell(3);
    for (int i=0;i<3;i++) {
        shell[i]=i;
    }
    vector<int> counter(3);
    for (int i=0; i<n; i++) {
        int a, b, g;
        cin>>a>>b>>g;
        a--, b--, g--;
        swap(shell[a], shell[b]);
        counter[shell[g]] += 1;
    }
    cout << max({counter[0], counter[1], counter[2]}) << endl;

    return 0;
}

