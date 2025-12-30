// December 29, 2025
// Subarray Sum Constraints

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int n,m;
vector<vector<pair<int,int>>> graph;
vector<ll> prefix;
vector<bool> visited;
bool check=true;


void dfs(int node){
    visited[node]=true;
    for(auto p:graph[node]){
        int v=p.first;
        ll val=prefix[node]+p.second;
        if(!visited[v]){
            prefix[v]=val;
            dfs(v);
            if(!check)return;
        }else if(prefix[v]!=val){
            check=false;
            return;
        }
    }
}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;
    graph.resize(n+1);
    prefix.resize(n+1);
    visited.resize(n+1);

    for(int i=0;i<m;i++){
        int l,r,s;
        cin>>l>>r>>s;
        graph[l-1].push_back(make_pair(r,s));
        graph[r].push_back(make_pair(l-1,-s));
    }

    for(int i=0;i<=n;i++){
        if(!visited[i]){
            prefix[i]=0;
            dfs(i);
            if(!check){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }

    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++){
        cout<<prefix[i]-prefix[i-1]<<" ";
    }
    return 0;
}

