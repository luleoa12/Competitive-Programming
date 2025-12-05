// 12/4/2025
// CSES Problem Set: Graph Algorithms - Counting Rooms
#include <bits/stdc++.h>
using namespace std;

int ans=0;
vector<vector<char>> graph(1001,vector<char>(1001));
vector<vector<bool>> visited(1001,vector<bool>(1001));
int n,m;
void floodfill(int row,int col){
    if(row<0||row>=n||col<0||col>=m||visited[row][col]||graph[row][col]=='#'){
        return;
    }
    visited[row][col]=true;
    floodfill(row+1,col);
    floodfill(row-1,col);
    floodfill(row,col-1);
    floodfill(row,col+1);
}
int main(){
    cin>>n>>m;  
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char cur;
            cin>>cur;
            graph[i][j]=cur;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visited[i][j]&&graph[i][j]!='#'){
                ans++;
                floodfill(i,j);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
