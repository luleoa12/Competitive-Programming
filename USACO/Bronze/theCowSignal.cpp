// July 10, 2025
// USACO 2016 December Contest, Bronze
// Problem 3. The Cow-Signal

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

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m,n,k;
    cin>>m>>n>>k;
    string row;
    for (int i=0; i<m; i++) {
        cin>>row;
   
        string cur = "";
        int length = row.size();
        for (int j=0; j<length; j++) {
            for (int l=0; l<k; l++){
                cur += row[j];
            }
        }
        for (int l=0; l<k; l++){
            cout << cur << endl;
        }

    }
    return 0;
}

