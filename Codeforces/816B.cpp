// July 22, 2025
// Codeforces problem 816B - Karen and Coffee

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k,q;
    cin>>n>>k>>q;
    vector<ll> temp(200000+2);
    for(ll i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        temp[l]++;
        temp[r+1]--;
    }
    for(ll i=1;i<temp.size();i++){
        temp[i]+=temp[i-1];
    }
    vector<ll> acc(200002,0);
    for(int i=1;i<=200000;i++){
        acc[i]=acc[i-1]+(temp[i]>=k ? 1 : 0);
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        
        cout<<acc[b]-acc[a-1]<<endl;
    }

    return 0;
}

