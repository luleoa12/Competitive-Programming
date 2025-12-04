// 11/30/2025
// USACO 2025 February Contest, Silver
// Problem 2. Vocabulary Quiz

#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> childrenCount;
vector<int> depth;
vector<int> p;
vector<vector<int>> graph;

void dfs(int node,int parent,int d){
    childrenCount[node]=0;
    depth[node]=d;
    for(int child:graph[node]){
        if(child==parent){
            continue;
        }
        childrenCount[node]++;
        dfs(child,node,d+1);
    }
}



int main(){    
    cin>>n;
    p.resize(n+1);
    depth.resize(n+1);
    childrenCount.resize(n+1);
    graph.resize(n+1);
    p[0]=0;
    for(int i=0;i<n;i++){
        int cur;
        cin>>cur;
        graph[cur].push_back(i+1);
        p[i+1]=cur;
    }
    int leaf=0;
    dfs(0,-1,0);
    for(int i=1;i<=n;i++){
        if(childrenCount[i]==0){ // means it's a leaf node
            leaf++;
        }
    }

    for(int i=0;i<leaf;i++){
        int w;
        cin>>w;
        while(w!=0&&childrenCount[p[w]]==1){
            w=p[w];
            childrenCount[w]=0;
            
        }
        if(w==0){
            cout<<0<<endl;
        }else{
            cout<<depth[w]<<endl;
            childrenCount[p[w]]--;
        }

    }
    return 0;
}
