// January 3, 2026
// USACO 2018 December Contest, Silver
// Problem 3. Mooyo Mooyo

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

vector<vector<char>> grid;
vector<vector<bool>> visited;

int n,k;
int num=0;
vector<pair<int,int>> clear;
void floodfill(int x,int y,char c){
    if(x<0||x>=n||y<0||y>=10||visited[x][y]||grid[x][y]!=c)return;
    visited[x][y]=true;
    clear.push_back({x,y});
    num++;
    floodfill(x+1,y,c);
    floodfill(x,y+1,c);
    floodfill(x,y-1,c);
    floodfill(x-1,y,c);
}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("mooyomooyo.in","r",stdin);
    freopen("mooyomooyo.out","w",stdout);


    cin>>n>>k;
    visited.resize(n,vector<bool>(10));
    grid.resize(n,vector<char>(10));
    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++){
            cin>>grid[i][j];
        }
    }

    while(true){
        bool check=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<10;j++){
                visited[i][j]=false;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<10;j++){
                if(grid[i][j]=='0')continue;
                num=0;
                clear={};
                floodfill(i,j,grid[i][j]);
                if(num>=k){
                    for(auto p:clear){
                        grid[p.first][p.second]='0';
                    }
                    check=true;
                }
            }
        }

        for(int j=0;j<10;j++){
            int idx=n-1;
            for(int i=n-1;i>=0;i--){
                if(grid[i][j]!='0'){
                    char temp=grid[i][j];
                    grid[i][j]='0';
                    grid[idx][j]=temp;
                    idx--;
                }
            }
        }
        if(!check)break;
    }
    for(int i=0;i<n;i++){
        string cur="";
        for(int j=0;j<10;j++){
            cur+=grid[i][j];
        }
        cout<<cur<<endl;
    }

    return 0;
}

