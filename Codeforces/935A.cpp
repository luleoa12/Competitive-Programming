// July 8, 2025
// Codeforces problem 935A - Fafa and his Company	

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

    int ans=0;
    for (int i=1; i<n; i++) {
        if (n % i == 0) {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}

