// July 10, 2025
// Codeforces problem 69A - Young Physicist

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

    int n;
    cin>>n;
    int x=0;
    int y=0;
    int z=0;

    int x1, y1, z1;
    for (int i=0; i<n; i++) {
        cin>>x1>>y1>>z1;
        x += x1;
        y += y1;
        z += z1;
    }
    if (x==0 && y==0 && z==0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

