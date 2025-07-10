// July 8, 2025
// Codeforces problem 828A - Restaurant Tables

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

    int n,a,b;
    cin >> n >> a >> b;
    int half=0;
    int x;
    vector<int> tables;

    int denied = 0;
    for (int i=0; i<n; i++) {
        cin >> x;
        if (x == 1) {
            if (a != 0) {
                a -= 1;
            } else if (b != 0) {
                half += 1;
                b -= 1;
            } else if  (half != 0) {
                half -= 1;
            } else {
                denied++;
            }
        } else {
            if (b >= 1) {
                b -= 1;
            }else {
                denied+=2;
            }
        }
    }
    cout << denied << '\n';


    return 0;
}

