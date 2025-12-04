// 12/3/2025
// USACO 2019 US Open Contest, Silver
// Problem 3. Fence Planning

#include <bits/stdc++.h>
using namespace std;

long long ans=999999999;
vector<vector<int>> graph;
vector<pair<int,int>> coords;
vector<bool> visited;
int minx,miny,maxx,maxy;

void dfs(int node){
    visited[node]=true;
    minx=min(minx,coords[node].first);
    miny=min(miny,coords[node].second);
    maxx=max(maxx,coords[node].first);
    maxy=max(maxy,coords[node].second);
    for(int child:graph[node]){
        if(!visited[child]){
            dfs(child);
            
        }
    }
}

int main(){
    freopen("fenceplan.in","r",stdin);
    freopen("fenceplan.out","w",stdout);

    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        coords.push_back(make_pair(x,y));
    }
    graph.resize(n);
    visited.resize(n,false);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            minx=999999999;
            miny=999999999;
            maxx=-1;
            maxy=-1;
            dfs(i);
            ans=min(ans,2LL*abs(miny-maxy)+2LL*abs(maxx-minx));
        }
    }
    cout<<ans<<endl;
    return 0;
}