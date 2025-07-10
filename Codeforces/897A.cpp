// July 8, 2025
// 897A - Scarborough Fair	

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

    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    for (int i=0; i<m; i++) {
        int l, r;
        char c1, c2;
        cin>>l>>r>>c1>>c2;
        for (int i=l-1; i<r; i++) {
            if (s[i] == c1) {
                s[i] = c2;
            }
        }
    }
    cout << s << endl;
    return 0;
}

