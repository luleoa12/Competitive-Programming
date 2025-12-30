// December 29, 2025
// Flight Routes Check

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int n,m;
vector<vector<vector<int>>> graph;
vector<bool> visited;

void dfs(int node,int x){
    visited[node]=true;
    for(int child:graph[node][x]){
        if(!visited[child]){
            dfs(child,x);
        }
    }
}
int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;
    graph.resize(n, vector<vector<int>>(2));
    visited.resize(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        graph[a][0].push_back(b);
        graph[b][1].push_back(a);
    }
    dfs(0,0);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            cout<<"NO"<<endl;
            cout<<1<<" "<<i+1<<endl;
            return 0;
        }
    }
    fill(visited.begin(),visited.end(),false);
    dfs(0,1);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            cout<<"NO"<<endl;
            cout<<i+1<<" "<<1<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}

