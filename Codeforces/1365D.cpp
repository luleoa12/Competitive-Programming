// January 2, 2026
// Solve The Maze

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

vector<vector<char>> grid(50,vector<char>(50));
vector<vector<bool>> visited(50,vector<bool>(50));

vector<int> dx={-1,0,1,0};
vector<int> dy={0,1,0,-1};

int n,m;

void floodfill(int r,int c){
    if(r<0||r>=n||c<0||c>=m||grid[r][c]=='#'||visited[r][c])return;
    visited[r][c]=true;
    floodfill(r+1,c);
    floodfill(r-1,c);
    floodfill(r,c-1);
    floodfill(r,c+1);
}

int solve(){
    cin>>n>>m;
    for(int x=0;x<n;x++){
        for(int y=0;y<m;y++){
            cin>>grid[x][y];
        }
    }
    visited.assign(50, vector<bool>(50, false));
    bool check=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='B'){
                for(int x=0;x<4;x++){
                    int r=i+dx[x];
                    int c=j+dy[x];
                    if(r>=0&&r<n&&c>=0&&c<m){
                        if(grid[r][c]=='G'){
                            cout<<"No"<<endl;
                            return 0;
                        }else if(grid[r][c]=='.'){
                            grid[r][c]='#';
                        }
                    }
                }
            }
        }
    }
    floodfill(n-1,m-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='G'&&!visited[i][j]){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}

int main() {    

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

