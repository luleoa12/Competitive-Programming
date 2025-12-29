// 12/5/2025
// CSES Problem Set: Tree Algorithms - Tree Diameter

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
vector<int> dist;

void dfs(int node,int parent){
    if(parent!=-1){
        dist[node]=dist[parent]+1;
    }
    for(int child:graph[node]){
        if(child==parent)continue;
        dfs(child,node);
    }
}
int main(){
    int n;
    cin>>n;
    graph.resize(n);
    dist.resize(n);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(0,-1);
    int start=-1;
    int ans=-1;
    for(int i=0;i<n;i++){
        if(dist[i]>ans){
            ans=dist[i];
            start=i;
        }
    }
    fill(dist.begin(),dist.end(),0);
    dfs(start,-1);
    ans=-1;
    for(int i=0;i<n;i++){
        ans=max(ans,dist[i]);
    }
    cout<<ans<<endl;
    return 0;
}