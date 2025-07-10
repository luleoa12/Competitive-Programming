// July 7, 2025
// Codeforces problem 868A - Bark to Unlock

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
    string password = "";
    int n = 0;
    cin >> password;
    cin >> n;
    string word;

    bool check1 = false; // if they can bark the first letter
    bool check2 = false; // if they can bark the second letter
    for (int i=0; i<n; i++) {
        cin >> word;
        if (word[1] == password[0]) {
            check1 = true;
        }
        if (word[0] == password[1]) {
            check2 = true;
        }
        if (word == password) {
            check1 = true;
            check2 = true;
        }
    }
    if (check1 && check2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

