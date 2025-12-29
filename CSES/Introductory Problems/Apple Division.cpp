// July 10, 2025
// CSES Problem Set: Introductory Problems - Apple Division

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
using ll = long long;

using namespace std;

int n;
vector<ll> weights;

ll recurseApples(int index, ll sum1, ll sum2) {
    if (index == n) {
        return abs(sum1-sum2);
    }
    return min(recurseApples(index+1, sum1+weights[index], sum2), recurseApples(index+1, sum1, sum2+weights[index]));
}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    weights.resize(n);
    for (int i=0; i<n; i++) {
        cin>>weights[i];
    }
    cout << recurseApples(0, 0, 0) << endl;
    return 0;
}

