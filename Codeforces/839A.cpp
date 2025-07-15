// July 7, 2025
// Codeforces problem 839A - Arya and Bran

#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cstdio>

using namespace std;


int main() {    
    int n,k=0;

    cin>>n>>k;
    vector<int> candies;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        candies.push_back(x);
    }

    int extra=0;
    int given=0;

    int days=-1;
    for (int i=0;i<n;i++) {
        extra += candies[i];
        given += min(8, extra);
        extra -= min(8, extra);

        if (given >= k) {
            days = i+1;
            break;
        }
    }

    cout << days << endl;

    return 0;
}

