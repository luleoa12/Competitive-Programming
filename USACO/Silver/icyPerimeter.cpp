// 12/4/2025
// USACO 2019 January Contest, Silver
// Problem 2. Icy Perimeter

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int n;
int maxArea=-1;
int maxPerimeter=-1;

vector<vector<char>> graph(1002,vector<char>(1002));
vector<vector<bool>> visited(1002,vector<bool>(1002));

int area,perimeter;
void floodfill(int r,int c){
    if(visited[r][c]||graph[r][c]!='#'){
        return;
    }
    if(graph[r][c+1]!='#'){
        perimeter++;
    }
    if(graph[r][c-1]!='#'){
        perimeter++;
    }
    if(graph[r+1][c]!='#'){
        perimeter++;
    }
    if(graph[r-1][c]!='#'){
        perimeter++;
    }
    visited[r][c]=true;
    area++;

    floodfill(r+1,c);
    floodfill(r-1,c);
    floodfill(r,c+1);
    floodfill(r,c-1);

}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("perimeter.in","r",stdin);
    freopen("perimeter.out","w",stdout);
    
    cin>>n;
    for(int i=0;i<n;i++){
        graph[0][i]='|'; 
    }
    for(int i=1;i<=n;i++){
        graph[i][0]='|';
        for(int j=1;j<=n;j++){
            cin>>graph[i][j];
        }
        graph[i][n+1]='|';
    }
    for(int i=0;i<n;i++){
        graph[n+1][i]='|'; 
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(!visited[i][j]&&graph[i][j]=='#'){
                area=0;
                perimeter=0;
                floodfill(i,j);
                if(area>maxArea){
                    maxArea=area;
                    maxPerimeter=perimeter;
                }else if(area==maxArea){
                    maxPerimeter=perimeter;
                }
            }
        }
    }
    cout<<maxArea<<" "<<maxPerimeter;
    return 0;
}

