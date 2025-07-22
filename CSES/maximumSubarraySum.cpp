// July 21, 2025
// CSES Problem Set: Sorting and Searching - Maximum Subarray Sum

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    
    vector<ll> x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    ll cur=x[0];
    ll sum=x[0];
    for(int i=1;i<n;i++){
        cur=max(cur+x[i],x[i]);
        sum=max(sum,cur);
    }
    cout<<sum<<endl;
    return 0;
}

