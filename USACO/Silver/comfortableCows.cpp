// 12/23/25
// USACO 2021 February Contest, Silver
// Problem 1. Comfortable Cows

#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<bool>>p(3000,vector<bool>(3000,false));
queue<pair<int,int>>q;
vector<int> dx{-1,0,1,0};
vector<int> dy{0,1,0,-1};

void check(int x,int y){
    if(!p[x][y])return;
    int count=0;
    for(int i=0;i<4;i++){
        if(p[x+dx[i]][y+dy[i]]){
            count++;
        }
    }
    if(count==3){
        for(int i=0;i<4;i++){
            pair<int,int> cur{x+dx[i],y+dy[i]};
            if(!p[cur.first][cur.second]){
                q.push(cur);
            }
        }
    }
}

int main() {    
    cin>>n;
    int total=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        x+=1000,y+=1000;
        q.push(make_pair(x,y));
        while(!q.empty()){
            pair<int,int> cur=q.front();
            q.pop();
            if(p[cur.first][cur.second])continue;
            total++;
            p[cur.first][cur.second]=true;
            check(cur.first,cur.second);
            for(int j=0;j<4;j++){
                if(p[cur.first+dx[j]][cur.second+dy[j]]){
                    check(cur.first+dx[j],cur.second+dy[j]);
                }
            }
        }
        cout<<total-(i+1)<<endl;
    }
    return 0;
}