// July 10, 2025
// Codeforces problem 271A - Beautiful Year

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
#include <set>
using ll = long long;

using namespace std;

bool unique(int year) {
    string s = to_string(year);
    set<char> digits(s.begin(), s.end());
    return digits.size() == s.size();
}
int year;
int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>year;

    while (true) {
        year++;
        if (unique(year)) {
            cout << year << endl;
            break;
        }
    }
    return 0;
}

