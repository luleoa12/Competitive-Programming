// 12/4/2025
// USACO 2019 February Contest, Silver
// Problem 3. The Great Revegetation

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

vector<vector<pair<int,bool>>> graph;
bool impossible=false;
int n,m;
vector<int> color;

void dfs(int node,int c){
    if(impossible)return;
    color[node]=c;
    for(auto cur:graph[node]){
        int child=cur.first;
        int isSame=cur.second;
        int required;
        if(isSame){
            required=c;
        }else{
            required=1-c;
        }
        if(color[child]==-1){
            dfs(child,required);
        }else if(color[child]!=required){
            impossible=true;
            break;
        }
    }

}
int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("revegetate.in","r",stdin);
    freopen("revegetate.out","w",stdout);

    cin>>n>>m;
    graph.resize(n);
    color.assign(n,-1);
    for(int i=0;i<m;i++){
        char s;
        int a,b;
        cin>>s>>a>>b;
        a--,b--;
        bool isSame;
        if(s=='S'){
            isSame=true;
        }else{
            isSame=false;
        }
        graph[a].push_back({b,isSame});
        graph[b].push_back({a,isSame});
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(color[i]==-1){
            ans++;
            dfs(i,0);
            if(impossible){
                break;
            }
        }
    }
    if(impossible){
        cout<<0<<endl;
    }else{
        cout<<1;
        for(int i=0;i<ans;i++){
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}

