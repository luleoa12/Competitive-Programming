// July 7, 2025
// CSES Problem Set: Introductory Problems - Repetitions

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
    string sequence;
    cin >> sequence;
    char cur = sequence[0];

    int count=0;
    int maxCount=0;
    for (int i=0; i<sequence.length(); i++) {
        if (sequence[i] == cur) {
            count += 1;
        } else {
            maxCount = max(maxCount, count);
            count = 1;
            cur = sequence[i];
        }
    }
    maxCount = max(maxCount, count);
    cout << maxCount << endl;

    return 0;
}

