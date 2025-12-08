// 12/5/2025
// Tree Distances I

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
vector<int> firstMax(200001);
vector<int> secondMax(200001);
vector<int> c(200001);
int n;

void dfs(int node,int parent){
    firstMax[node]=0;
    secondMax[node]=0;
    for(int child:graph[node]){
        if(child==parent)continue;
        dfs(child,node);
        if(firstMax[child]+1>firstMax[node]){
            secondMax[node]=firstMax[node];
            firstMax[node]=firstMax[child]+1;
            c[node]=child;
        }else if(firstMax[child]+1>secondMax[node]){
            secondMax[node]=firstMax[child]+1;
        }
    }
}

void dfs2(int node,int parent){
    for(int child:graph[node]){
        if(child==parent)continue;
        if(c[node]==child){
            if(firstMax[child]<secondMax[node]+1){
                secondMax[child]=firstMax[child];
                firstMax[child]=secondMax[node]+1;
                c[child]=node;
            }else{
                secondMax[child]=max(secondMax[child],secondMax[node]+1);
            }
        }else{
            secondMax[child]=firstMax[child];
            firstMax[child]=firstMax[node]+1;
            c[child]=node;
        }
        dfs2(child,node);
    }
}

int main(){
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
    dfs2(0,-1);
    for(int i=0;i<n;i++){
        cout<<firstMax[i]<<" ";
    }
    
    return 0;
}