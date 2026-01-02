// January 1, 2026
// The Child and Toy

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    long long ans=0;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        ans+=min(v[a],v[b]);
    }
    cout<<ans<<endl;
    return 0;
}

