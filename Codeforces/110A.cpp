// July 11, 2025
// Codeforces problem 110A - Nearly Lucky Number

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

ll n;
int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    ll count=0;
    while (n>0) {
        if (n%10 == 4 || n%10 == 7) {
            count += 1;
        } 
        n/=10;
    }
    if (count % 10==4 || count % 10==7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

