// July 10, 2025
// CSES Problem Set: Introductory Problems - Creating Strings

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
using ll = long long;

using namespace std;

string s;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    vector<string> ans;
    sort(s.begin(), s.end());
    do {
        ans.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << ans.size() << endl;
    for (auto i=0; i<ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}

