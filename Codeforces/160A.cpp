// December 31, 2025
// Twins

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    sort(coins.begin(),coins.end(),greater<>());
    int s=0;
    for(int c:coins){
        s+=c;
    }
    int cur=0;
    int ans;
    for(int i=0;i<n;i++){
        cur+=coins[i];
        if(cur>s-cur){
            ans=i+1;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}

