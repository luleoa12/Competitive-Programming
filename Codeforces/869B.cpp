// July 7, 2025
// Codeforces problem 869B - The Eternal Immortality

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
    long long int a=0, b=0;
    cin >> a >> b;
    int ans = 1;
    for (long long int i=a+1; i<b+1; i++) {
        if (i%10 == 0) {
            ans = 0;
            break;
        }
        ans *= i % 10;
        ans %= 10;
    }
    cout << ans % 10 << endl;

    return 0;
}

