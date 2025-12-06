// 12/5/2025
// USACO 2018 January Contest, Silver
// Problem 3. MooTube

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll N,Q;
vector<vector<pair<ll,ll>>> graph;
ll videos;
void dfs(ll node,ll parent,ll r){
    for(auto p:graph[node]){
        ll child=p.first;
        if(child==parent||p.second<r)continue;
        videos++;
        dfs(child,node,r);
    }
}

int main(){
    freopen("mootube.in","r",stdin);
    freopen("mootube.out","w",stdout);

    cin>>N>>Q;
    graph.resize(N+1);
    for(int i=0;i<N-1;i++){
        ll p,q,r;
        cin>>p>>q>>r;
        graph[p].push_back(make_pair(q,r));
        graph[q].push_back(make_pair(p,r));
    }
    for(int i=0;i<Q;i++){
        ll k,v;
        cin>>k>>v;
        videos=0;
        dfs(v,-1,k);
        cout<<videos<<endl;
    }
    return 0;
}