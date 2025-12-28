// 12/27/2025
// USACO 2022 US Open Contest, Silver
// Problem 1. Visits

#include <bits/stdc++.h>
using namespace std;
using ll=long long;

vector<int> a,v;
vector<vector<int>> graph;
vector<bool> visited;

void mark(int y){
    if(visited[y])return;
    visited[y]=true;
    for(int child:graph[y]){
        mark(child);
    }
}

int min_cycle(int cur){
    int y=a[cur];
    int z=a[cur];
    while(true){
        y=a[y];
        z=a[a[z]];
        if(y==z)break;
    }
    int min_v=v[y];
    y=a[y];
    while(y!=z){
        min_v=min(min_v,v[y]);
        y=a[y];
    }
    mark(y);
    return min_v;
}

int main(){
    int n;
    cin>>n;

    a.resize(n);
    v.resize(n);
    graph.resize(n);
    visited.resize(n);

    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>v[i];
        a[i]--;
        graph[a[i]].push_back(i);
        ans+=v[i];
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            ans-=min_cycle(i);
        }
    }
    
    cout<<ans<<endl;
    return 0;
}