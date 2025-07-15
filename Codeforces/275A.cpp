// July 14, 2025
// Codeforces problem 275A - Lights Out

#include <iostream>
#include <vector>
#include <cmath>
#include <cctype>
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
#include <set>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> lights(3, vector<int>(3));
    for (int i=0;i<3;i++) {
        for (int j=0; j<3; j++) {
            cin>>lights[i][j];
        }
    }
    vector<vector<int>> ans(3, vector<int>(3, 1));
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (lights[i][j] % 2 == 1) {
                ans[i][j] = 1-ans[i][j];
                if (j+1<3) {
                    ans[i][j+1] = 1-ans[i][j+1];
                } if (i+1<3) {
                    ans[i+1][j] = 1-ans[i+1][j];
                } if (i-1>-1) {
                    ans[i-1][j] = 1-ans[i-1][j];
                } if (j-1>-1) {
                    ans[i][j-1] = 1-ans[i][j-1];
                }
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}

