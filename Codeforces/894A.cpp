// July 8, 2025
// Codeforces problem 894A - QAQ

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

    string cry = "";
    string n;
    cin >> n;
    int ans=0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] != 'Q') continue;
        for (int j = i + 1; j < n.size(); j++) {
            if (n[j] != 'A') continue;
            for (int k = j + 1; k < n.size(); k++) {
                if (n[k] == 'Q') {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}

