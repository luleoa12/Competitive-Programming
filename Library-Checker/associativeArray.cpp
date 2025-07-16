// July 15, 2025
// Associative Array

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>q;
    map<ll, ll> m;
    for (int i=0; i<q; i++) {
        ll a,b,c;
        cin>>a;
        if (a==0) {
            cin>>b>>c;
            m[b] = c;
        } else {
            cin>>b;
            cout << m[b] << endl;
        }
    }
    return 0;
}

