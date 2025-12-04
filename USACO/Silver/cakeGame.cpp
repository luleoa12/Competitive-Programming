// 11/22/2025
// USACO 2024 December Contest, Silver
// Problem 1. Cake Game

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> cakes(n);
        for(int j=0;j<n;j++){
            cin>>cakes[j];
        }
        vector<long long> prefix(n+1);
        for(int i=0;i<cakes.size();i++){
            prefix[i+1]=prefix[i]+cakes[i];
        }
        long long ans=LLONG_MAX;
        for(int i=0;i<n-n/2;i++){
            ans=min(ans,prefix[i+n/2+1]-prefix[i]);
        }
        cout<<ans<<' '<<prefix[n]-ans<<endl;
    }
    return 0;
}

