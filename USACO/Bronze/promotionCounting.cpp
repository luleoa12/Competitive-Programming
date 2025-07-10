// July 8, 2025
// USACO 2016 January Contest, Bronze
// Problem 1. Promotion Counting

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
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    int b_b, b_a, s_b, s_a, g_b, g_a, p_b, p_a;
    cin >> b_b >> b_a;
    cin >> s_b >> s_a;
    cin >> g_b >> g_a;
    cin >> p_b >> p_a;
    
    int g_p = p_a - p_b;
    int s_g = g_a - g_b + g_p;
    int b_s = s_a - s_b + s_g;

    cout << b_s << endl;
    cout << s_g << endl;
    cout << g_p << endl;
    
    
    return 0;
}

