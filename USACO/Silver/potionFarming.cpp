// 11/30/2025
// USACO 2024 January Contest, Silver
// Problem 2. Potion Farming

#include <bits/stdc++.h>
using namespace std;


int n;
vector<vector<int>> graph;
vector<int> leaf;
vector<int> p;
int leaves=0;
vector<int> possiblePotions;

bool hasPotion(int node){
    return find(possiblePotions.begin(),possiblePotions.end(),node)!=possiblePotions.end();
}
int dfs(int node,int parent){
    int potions=0;
    for(int child:graph[node]){
        if(child==parent)continue;
        int p=dfs(child,node);
        potions+=p;
    }

    potions+=possiblePotions[node];
    
    return min(potions,leaf[node]);
}
void precalculate(int node,int parent){
    bool hasChild=false;
    for(int child:graph[node]){
        if(child==parent)continue;
        precalculate(child,node);
        hasChild=true;
        leaf[node]+=leaf[child];
    }
    if(!hasChild){
        leaf[node]=1;
        leaves++;
    }
}


int main(){
    cin>>n;
    graph.resize(n+1);
    leaf.resize(n+1);
    p.resize(n);
    possiblePotions.resize(n+1);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }

    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    precalculate(1,-1);
    for(int i=0;i<leaves;i++){
        possiblePotions[p[i]]++;
    }
    int ans=dfs(1,-1); 
    cout<<ans<<endl;

    return 0;
}
