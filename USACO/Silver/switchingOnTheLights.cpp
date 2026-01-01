// December 31, 2025
// USACO 2015 December Contest, Silver
// Problem 1. Switching on the Lights

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int n,m;
vector<vector<vector<pair<int,int>>>> graph;
vector<vector<bool>> visited;
vector<vector<bool>> lights;
vector<int> dx={0,-1,0,1};
vector<int> dy={-1,0,1,0};
int ans=1;

bool checkConnected(int x,int y){
    for(int i=0;i<4;i++){
        int newX=x+dx[i];
        int newY=y+dy[i];
        if(newX<0||newX>=n||newY<0||newY>=n)continue;
        if(visited[newX][newY])return true;
    }
    return false;
}

void floodfill(int x,int y){
    if(x<0||x>=n||y<0||y>=n||visited[x][y]||!lights[x][y])return;

    if(!checkConnected(x,y)&&!(x==0&&y==0))return;
    visited[x][y]=true;
    for(int i=0;i<4;i++){
        floodfill(x+dx[i],y+dy[i]);
    }

    for(int i=0;i<graph[x][y].size();i++){
        int roomX=graph[x][y][i].first;
        int roomY=graph[x][y][i].second;

        if(!lights[roomX][roomY]){
            ans++;
        }
        lights[roomX][roomY]=true;
        floodfill(roomX,roomY);
    }
}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("lightson.in","r",stdin);
    freopen("lightson.out","w",stdout);

    cin>>n>>m;
    graph.assign(n, vector<vector<pair<int,int>>>(n));
    visited.assign(n, vector<bool>(n, false));
    lights.assign(n, vector<bool>(n, false));
    lights[0][0]=true;
    for(int i=0;i<m;i++){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        x--,y--,a--,b--;
        graph[x][y].push_back(make_pair(a,b));
    }

    floodfill(0,0);
    cout<<ans<<endl;

    return 0;
}

