// July 15, 2025
// USACO 2023 February Contest, Bronze
// Problem 3. Watching Mooloo

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<ll> days(n);
    for (int i=0; i<n; i++) {
        cin>>days[i];
    }
    ll last_day = days[0];
    ll cost = k+1;
    for (long long d : days) {
        if (d-last_day < k+1) {
            cost += d-last_day;
        } else {
            cost += k+1;
        }
        last_day = d;
    }
    cout << cost << endl;

    return 0;
}

