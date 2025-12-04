// 12/2/2025
// USACO 2016 US Open Contest, Silver
// Problem 3. Closing the Farm

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
vector<int> closed;
int nodes=0;
void dfs(int node){
    if(visited[node]||closed[node])return;
    nodes++;
    visited[node]=true;
    for(int child:graph[node]){
        if(!visited[child]){
            dfs(child);
        }
    }
}


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("closing.in","r",stdin);
    freopen("closing.out","w",stdout);

    int n,m;
    cin>>n>>m;
    graph.resize(n);
    closed.resize(n);
    visited.resize(n);

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<int> order(n);
    for(int i=0;i<n;i++){
        cin>>order[i];
        order[i]--;
    }
    dfs(0);
    if(nodes==n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    for(int i=0;i<n-1;i++){
        nodes=0;
        closed[order[i]]=true;
        for(int x=0;x<visited.size();x++)visited[x]=false;
        dfs(order[i+1]);
        if(nodes==n-i-1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

