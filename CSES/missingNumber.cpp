// July 7, 2025
// CSES Problem Set: Introductory Problems - Missing Number

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
    long long int num=0;
    cin >> num;
    vector<long long int> nums;
    long long x;
    long long total = num*(num+1)/2;
    long long cur = 0;
    for (int i=0; i<num-1; i++) {
        cin >> x;
        cur += x;
    }
    
    cout << total-cur << endl;
    return 0;
}

