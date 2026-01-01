// December 31, 2025
// USACO 2017 US Open Contest, Silver
// Problem 3. Where's Bessie?

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

vector<vector<char>> grid;
vector<vector<bool>> visited;
int x_min,x_max,y_min,y_max;
int n;

void floodfill(int x,int y,char color){
    if(x>x_max||x<x_min||y>y_max||y<y_min||visited[x][y]||grid[x][y]!=color)return;
    visited[x][y]=true;
    floodfill(x+1,y,color);
    floodfill(x-1,y,color);
    floodfill(x,y+1,color);
    floodfill(x,y-1,color);
}

bool check(int x1,int y1,int x2,int y2){
    vector<int> region_count(26);
    x_min=x1;
    x_max=x2;
    y_min=y1;
    y_max=y2;

    for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            if(!visited[i][j]){
                char color=grid[i][j];
                region_count[color-'A']++;
                floodfill(i,j,color);
            }
        }
    }

    visited.assign(n, vector<bool>(n, false));
    int color_count=0;
    bool color_with_one_region=false;
    bool color_with_more_region=false;
    for(int i=0;i<region_count.size();i++){
        if(region_count[i]!=0)color_count++;
        if(region_count[i]==1)color_with_one_region=true;
        if(region_count[i]>1)color_with_more_region=true;
    }
    if(color_count==2&&color_with_one_region&&color_with_more_region){
        return true;
    }else{
        return false;
    }
}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("where.in","r",stdin);
    freopen("where.out","w",stdout);

    cin>>n;
    grid.resize(n,vector<char>(n));
    visited.resize(n,vector<bool>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    vector<vector<int>> list;
    for(int x1=0;x1<n;x1++){
        for(int y1=0;y1<n;y1++){
            for(int x2=0;x2<n;x2++){
                for(int y2=0;y2<n;y2++){
                    if(check(x1,y1,x2,y2)){
                        list.push_back({x1,y1,x2,y2});
                    }
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<list.size();i++){
        bool valid=true;
        for(int j=0;j<list.size();j++){
            if(i==j)continue;
            if (list[i][0]>=list[j][0] &&
                list[i][1]>=list[j][1] &&
                list[i][2]<=list[j][2] &&
                list[i][3]<=list[j][3]) {
                valid=false;
                break;
            }
        }
        if(valid){
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}

