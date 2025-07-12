// July 10, 2025
// Codeforces problem 1029541A - Maximum Distance	

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
    int n;
    cin>>n;
    vector<int> xCoord;
    vector<int> yCoord;
    int x;
    for (int i=0; i<n; i++) {
        cin >> x;
        xCoord.push_back(x);
    }
    for (int i=0; i<n; i++) {
        cin >> x;
        yCoord.push_back(x);
    }
    int ans=0;
    int cur;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            cur = pow(xCoord[i]-xCoord[j], 2) + pow(yCoord[i]-yCoord[j], 2);
            ans = max(ans, cur);            
        }
        
    }
    cout << ans << endl;
    return 0;
}

