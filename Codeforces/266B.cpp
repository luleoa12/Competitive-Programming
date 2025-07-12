// July 10, 2025
// Codeforces problem 266B - Queue at the School

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
    int n,t;
    cin>>n>>t;
    string line;
    cin>>line;
    for (int i=0; i<t; i++) {
        for (int j=0; j<n-1; j++) {
            if (line[j] == 'B' && line[j+1] == 'G') {       
                line[j] = 'G';
                line[j+1] = 'B';
                j++;
            }
        }
    }
    cout << line << endl;
    return 0;
}

