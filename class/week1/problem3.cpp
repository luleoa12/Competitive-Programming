// 9/20/2025
// https://usaco.org/index.php?page=viewproblem2&cpid=666

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("haybales.in","r",stdin);
    freopen("haybales.out","w",stdout);

    int n,q;
    cin>>n>>q;

    vector<ll> haybales(n);
    for(int i=0;i<n;i++){
        cin>>haybales[i];
    }
    sort(haybales.begin(),haybales.end());
    for(int i=0;i<q;i++){
        ll a,b;
        cin>>a>>b;
        ll min_=lower_bound(haybales.begin(),haybales.end(),a)-haybales.begin();
        ll max_=upper_bound(haybales.begin(),haybales.end(),b)-haybales.begin();
        cout<<max_-min_<<endl;
    }
    return 0;
}

