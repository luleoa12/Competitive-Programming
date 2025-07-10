// July 7, 2025

#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;


int main() {    
    long long num;
    cin >> num;

    string ans = to_string(num) + " ";
    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
        }
        else {
            num = num*3 + 1;
        }
        ans += to_string(num) + " ";
    }
    cout << ans << endl;
    return 0;

}

