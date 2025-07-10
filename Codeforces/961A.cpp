// July 8, 2025
// Codeforces problem 961A - Tetris

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
    int n,m;
    cin >> n >> m;
    int x;

    int ans = 999999999;
    unordered_map<int, int> squares;
    for (int i=0;i<m;i++) {
        cin >> x;
        squares[x-1] += 1;
    }
    for (int i=0; i<n; i++) {
        ans = min(squares[i], ans);
    }
    cout << ans << endl;
    return 0;
}

