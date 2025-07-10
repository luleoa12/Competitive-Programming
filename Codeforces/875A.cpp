// July 7, 2025
// Codeforces problem 875A - Classroom Watch

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

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num%10;
        num/=10;
    }
    return sum;
}
int main() {     
    int n;
    cin >> n;
    vector<int> v;
    for (int i=(1, n-100); i<n; i++) {
        if (i+digitSum(i) == n) {
            v.push_back(i);

        }
    }
    cout << v.size() << endl;
    for (int i=0; i<v.size(); i++) {
        cout << v.at(i) << endl;
    }

    return 0;
}

