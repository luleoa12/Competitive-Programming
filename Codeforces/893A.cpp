// July 8, 2025
// Codeforces problem 893A - Chess For Three	

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

using namespace std;


int main() {    
    int n;
    cin >> n;
    int w;

    int player1 = 1;
    int player2 = 2;
    int spectator = 3;
    int temp;
    int loser;
    string ans = "YES";
    for (int i=0; i<n; i++) {
        cin >> w;
        if (w == spectator) {
            ans = "NO";
            break;
        }
        if (w == player1) {
            loser = player2;
        } else {
            loser = player1;
        }
        player1 = w;
        player2 = spectator;
        spectator = loser;
        
    }
    cout << ans << endl;
    return 0;
}

