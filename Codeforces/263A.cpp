// July 10, 2025
// Codeforces problem 263A - Beautiful Matrix	

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
#include <sstream>

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> row;
    int x;
    int j=0;
    int y=0;

    pair<int, int> pos = make_pair(0, 0);
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> x;
            if (x==1) {
                pos.first=i;
                pos.second=j;
      
            }
        }
    }
    cout << (abs(2-pos.first)+abs(2-pos.second)) << endl;
    return 0;
}

