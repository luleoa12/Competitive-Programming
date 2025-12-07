// date
// USACO 2020 December Contest, Silver
// Problem 1. Cowntagion

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int n;
vector<vector<int>> graph;
int ans=0;
void dfs(int node,int parent){
    int children=0;
    for(int child:graph[node]){
        if(child==parent)continue;
        children++;
        dfs(child,node);
    }
    ans+=ceil(log2(children+1))+children;
}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    graph.resize(n);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(0,-1);
    cout<<ans<<endl;
    return 0;
}

