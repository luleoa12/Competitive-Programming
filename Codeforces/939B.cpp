// July 8, 2025
// Codeforces problem 939B - Hamster Farm

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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n,k;
    cin >> n >> k;
    long long int cur = -1;
    long long int ans = 0;
    long long int amount = 0;
    long long int x;
    for (long long int i=0; i<k; i++) {
        cin >> x;
        if (cur < (n/x)*x) {
            ans = i+1;
            cur = (n/x)*x;
            amount = n/x;
        }
    }
    cout << ans << " " << amount << endl;
    return 0;
}

