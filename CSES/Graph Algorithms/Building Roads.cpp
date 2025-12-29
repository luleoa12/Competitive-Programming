// 12/2/2025
// CSES Problem Set: Graph Algorithms - Building Roads

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
void dfs(int node){
    for(int child:graph[node]){
        if(!visited[child]){
            visited[child]=true;
            dfs(child);
        }
    }
}


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n,m;
    cin>>n>>m;

    graph.resize(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    visited=vector<bool>(n);
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(visited[i]){continue;}
        visited[i]=true;
        ans.push_back(i);
        dfs(i);
    }
    cout<<ans.size()-1<<endl;
    for(int i=0;i<ans.size()-1;i++){
        cout<<ans[i]+1<<' '<<ans[i+1]+1<<endl;
    }

    return 0;
}

