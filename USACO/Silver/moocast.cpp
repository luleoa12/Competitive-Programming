// 12/3/2025
// USACO 2016 December Contest, Silver
// Problem 3. Moocast

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph(201);
vector<bool> visited(201);
int c=0;
void dfs(int node){
    visited[node]=true;
    c++;
    for(int child:graph[node]){
        if(!visited[child]){
            dfs(child);
        }
    }
}

int main(){
    freopen("moocast.in","r",stdin);
    freopen("moocast.out","w",stdout);

    int n;
    cin>>n;
    vector<vector<int>> inputs;
    for(int i=0;i<n;i++){
        int x,y,p;
        cin>>x>>y>>p;
        inputs.push_back({x,y,p});
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(pow(inputs[i][0]-inputs[j][0],2)+pow(inputs[i][1]-inputs[j][1],2)<=pow(inputs[i][2],2)){
                graph[i].push_back(j);
            }
            if(pow(inputs[i][0]-inputs[j][0],2)+pow(inputs[i][1]-inputs[j][1],2)<=pow(inputs[j][2],2)){
                graph[j].push_back(i);
            }
        }
    }
    int ans=-1;
    for(int i=0;i<n;i++){
        c=0;
        fill(visited.begin(),visited.end(),false);
        dfs(i);
        ans=max(ans,c);
    }
    cout<<ans<<endl;
    return 0;
}