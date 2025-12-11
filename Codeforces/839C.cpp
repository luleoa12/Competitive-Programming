// 12/10/2025
// Journey

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int n;
vector<vector<int>> graph;
double ans=0;
void dfs(int node,int parent,int depth,double p){
    int childCount=0;
    for(int child:graph[node]){
        if(child==parent)continue;
        childCount++;
    }
    if(childCount==0){   
        ans+=p*depth;
        return;
    }
    for(int child:graph[node]){
        if(child==parent)continue;
        dfs(child,node,depth+1,p/childCount);
    }

}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    graph.resize(n);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        u--,v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(0,-1,0,1.0);
    cout<<fixed<<setprecision(10)<<ans<<endl;

    return 0;
}

