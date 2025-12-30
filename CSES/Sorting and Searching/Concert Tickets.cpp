// December 29, 2025
// Concert Tickets

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    multiset<ll> prices;

    for(int i=0;i<n;i++){
        int cur;
        cin>>cur;
        prices.insert(cur);
    }

    for(int i=0;i<m;i++){
        long long price;
        cin>>price;
        auto it=prices.upper_bound(price);
        if(it==prices.begin()){
            cout<<-1<<endl;
        }else{
            it--;
            cout<<*it<<endl;
            prices.erase(it);
        }
    }
    return 0;
}

