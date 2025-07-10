// July 7, 2025
// Codeforces problem 935B - Fafa and the Gates

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
    int moves = 0;
    cin >> moves;
    string s = "";
    cin >> s;
    pair<int, int> pos = make_pair(0, 0);

    int ans = 0;
    for (int i=0; i<moves; i++) {
        if (s[i] == 'U') {
            pos.second += 1;
            if (i != moves-1 && s[i+1] == 'U') {
                
            }
            
        } else {
            pos.first += 1;
            
        }
        
            
        if (pos.second == pos.first && pos.second != 0) {
            if (i != moves-1 && s[i+1] == 'R' && s[i] == 'R') {
               ans += 1; 
            }
            if (i != moves-1 && s[i+1] == 'U' && s[i] == 'U') {
               ans += 1; 
            }
        }
        
    }
    cout << ans << endl;
    return 0;
}

