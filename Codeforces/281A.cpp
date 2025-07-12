// July 11, 2025
// Codeforces problem 281A - Word Capitalization	

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
    s[0] = toupper(s[0]);
    cout<<s<<endl;
    return 0;
}

