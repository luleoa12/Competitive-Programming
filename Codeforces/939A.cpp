// July 8, 2025
// Codeforces problem 939A - Love Triangle

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
    int n;
    cin >> n;
    vector<int> planes;
    int x;  

    string ans = "NO";
    for (int i=0;i<n;i++) {
        cin >> x;
        planes.push_back(x);
    }
    for (int i=0;i<n;i++) {
        if (planes[planes[planes[planes[i]-1]-1]-1] == planes[i]) {
            ans = "YES";
            break;
        }
    }
    cout << ans << endl;

    return 0;
}

