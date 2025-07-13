// July 12, 2025
// Codeforces problem 266A - Stones on the Table

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

int n;
string stones;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    cin>>stones;
    int ans=0;
    for (int i=0; i<stones.size()-1; i++) {
        if (stones[i] == stones[i+1]) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

