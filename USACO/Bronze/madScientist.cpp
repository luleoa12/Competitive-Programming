// July 15, 2025
// USACO 2020 February Contest, Bronze
// Problem 2. Mad Scientist

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);

    int n;
    string a, b;
    cin>>n;
    cin>>a;
    cin>>b;

    int ans=0;
    int cur=0;
    for (int i=0; i<n; i++) {
        if (a[i] != b[i]) {
            cur++;
        } else {
            if (cur>0) {
                ans++;
            }
            cur=0;
        }
    }
    cout << ans << endl;

    return 0;
}

