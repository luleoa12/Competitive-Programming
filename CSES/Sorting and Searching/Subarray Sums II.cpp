// July 20, 2025
// CSES Problem Set: Sorting and Searching - Subarray Sums II

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;
    
    vector<ll> prefix(n+1);
    for (int i=0;i<n;i++){
        ll x;
        cin>>x;
        prefix[i+1]=x+prefix[i];  
    }
    map<ll, int> freq;
    ll count=0;
    for(int i=0;i<=n;i++){
        count+=freq[prefix[i]-x];
        freq[prefix[i]]++;
    }
    cout<<count<<endl;

    return 0;
}

