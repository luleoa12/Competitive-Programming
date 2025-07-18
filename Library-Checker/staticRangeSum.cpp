// July 17, 2025
// Static Range Sum

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin>>n>>q;
    vector<ll> vi(n);
    for (int i=0; i<n; i++) {
        cin>>vi[i];
    }
    vector<ll> prefix(n+1);
    prefix[0]=0;
    for (int i=0; i<n; i++) {
        prefix[i+1]=prefix[i]+vi[i];
    }
    for (int i=0;i<q;i++) {
        int l,r;
        cin>>l>>r;
        cout<<prefix[r]-prefix[l]<<endl;
    }
    return 0;
}

