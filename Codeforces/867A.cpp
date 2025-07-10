// July 8, 2025
// Codeforces problem 867A - Between the Offices

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

    int n;
    cin >> n;
    string flights;
    cin >> flights;

    int sToF = 0;
    int fToS = 0;
    for (int i=0; i<n-1; i++) {
        if (flights[i] == 'F' && flights[i+1] == 'S') {
            fToS += 1;
        } else if (flights[i] == 'S' && flights[i+1] == 'F') {
            sToF += 1;
        }
    }
    if (sToF > fToS) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

