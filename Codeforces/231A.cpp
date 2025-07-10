// July 8, 2025
// Codeforces problem 231A - Team

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
    int n;
    cin >> n;

    int ans=0;
    for (int i=0; i<n; i++) {
        int count = 0;
        for (int j=0; j<3; j++) {
            int x;
            cin >> x;
            if (x==1) {
                count += 1;
            }

        }
        if (count >= 2) {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}

