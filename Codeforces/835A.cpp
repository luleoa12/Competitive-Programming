// July 7, 2025
// Codeforces problem 835A - Key races

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
    int s, v1, v2, t1, t2;

    cin >> s >> v1 >> v2 >> t1 >> t2;
    if (s*v1 + t1*2 > s*v2 + t2*2) {
        cout << "Second" << endl;
    }
    else if (s*v2 + t2*2 > s*v1 + t1*2) {
        cout << "First" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }

    return 0;
}

