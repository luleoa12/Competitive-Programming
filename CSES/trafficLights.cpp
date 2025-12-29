// 12/28/25
// Traffic Lights

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,n;
    cin>>x>>n;
    set<int> lights{0,x};
    multiset<int> dist{x};
    
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        
        auto it1=lights.upper_bound(p);
        auto it2=it1;
        it2--;

        dist.erase(dist.find(*it1-*it2));
        dist.insert(p-*it2);
        dist.insert(*it1-p);
        lights.insert(p);
        auto ans=dist.end();
        ans--;
        cout<<*ans<<" ";
    }

    return 0;
}

