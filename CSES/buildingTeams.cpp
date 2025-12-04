// 12/2/2025
// CSES Problem Set: Graph Algorithms - Building Teams

#include <bits/stdc++.h>
using ll = long long;

using namespace std;



vector<vector<int>> graph;

int switchTeam(int team){
    if(team==1){
        return 2;
    }else{
        return 1;
    }
}
vector<int> ans;
bool possible=true;
void dfs(int node,int parent, int team){
    if(ans[node]!=0&&ans[node]!=team){
        possible=false;
        return;
    }else{
        ans[node]=team;
    }
    
    for(int child:graph[node]){
        if(child==parent)continue;
        if(ans[child]==team){
            possible=false;
            return;
        }else if(ans[child]==0){
            ans[child]=switchTeam(team);
            dfs(child,node,switchTeam(team));
        }
    }
}
int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    ans.resize(n);
    graph.resize(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=0;i<n;i++){
        if(ans[i]==0){
            dfs(i,-1,1);
        }
    }

    if(possible){
        for(int num:ans){
            if(num==0){
                cout<<1<<" ";
            }else{
                cout<<num<<" ";
            }

        }
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}

