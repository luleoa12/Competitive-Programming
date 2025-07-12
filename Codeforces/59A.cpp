// July 11, 2025
// Codeforces problem 59A - Word	

#include <iostream>
#include <vector>
#include <cmath>
#include <cctype>
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
#include <set>
using ll = long long;

using namespace std;

string s;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>s;
    int count=0;
    for (int i=0;i<s.size();i++) {
        if (isupper(s[i])) {
            count += 1;
        }
    }
    if (count > s.size()-count) {
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return toupper(c); });
        cout << s << endl;
    } else {
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return tolower(c); });
        cout << s << endl;
    }
    return 0;
}

