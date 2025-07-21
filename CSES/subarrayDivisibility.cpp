// July 20, 2025
// CSES Problem Set: Sorting and Searching - Subarray Divisibility.cpp

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    ll prefix=0;
    map<ll,int> remainder;
    ll ans=0;
    remainder[0]=1;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        prefix = (prefix + x)%n;  
        if(prefix<0){
            prefix+=n;
        }
        if(remainder.find(prefix)!=remainder.end()){
            ans+=remainder[prefix];
            remainder[prefix]++;
        }else{
            remainder[prefix]=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}

