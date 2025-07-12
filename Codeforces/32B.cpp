// July 10, 2025
// Codeforce problem 32B - Borze

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

string code;
int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>code;
    string ans="";
    for (int i=0; i<code.size(); i++) {
        if (code[i] == '-' && i!=code.size()-1 && code[i+1] == '.') {
            ans += "1";
            i++;
        } else if (code[i] == '-' && i!=code.size()-1 && code[i+1] == '-') {
            ans += "2";
            i++;
        } else if (code[i] == '.') {
            ans += "0";
        }
    }
    cout<<ans<<endl;
    return 0;
}

