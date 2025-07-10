// July 7, 2025
// Codeforces problem 546A - Soldier and Bananas

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

using namespace std;


int main() {    
    int k,n,w = 0;
    cin >> k >> n >> w;
    int ans = (k*(w)*(w+1)/2)-n;
    cout << max(0, ans) << endl;

    return 0;
}

