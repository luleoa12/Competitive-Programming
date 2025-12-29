// 12/5/2025
// CSES Problem Set: Tree Algorithms - Subordinates

#include <bits/stdc++.h>
using ll = long long;

using namespace std;
vector<vector<int>> graph;
vector<int> childrenCount;

void dfs(int node,int parent){
    childrenCount[node]=1;
    for(int child:graph[node]){
        if(child==parent)continue;
        dfs(child,node);
        childrenCount[node]+=childrenCount[child];
    }
}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    graph.resize(n);
    childrenCount.resize(n);

    for(int i=1;i<n;i++){
        int cur;
        cin>>cur;
        cur--;
        graph[cur].push_back(i);
    }
    dfs(0,-1);
    for(int i=0;i<n;i++){
        cout<<childrenCount[i]-1<<" ";
    }
    return 0;
}

