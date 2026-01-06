// January 5, 2026
// USACO 2016 January Contest, Silver
// Problem 3. Build Gates

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

vector<vector<bool>> grid(4003,vector<bool>(4003));
vector<vector<bool>> visited(4003,vector<bool>(4003));

int minx=2001,maxx=2001,miny=2001,maxy=2001;

void floodfill(int x,int y){
    if(x<minx||x>maxx||y<miny||y>maxy||visited[x][y]||grid[x][y])return;
    visited[x][y]=true;
    floodfill(x+1,y);
    floodfill(x,y+1);
    floodfill(x-1,y);
    floodfill(x,y-1);
}


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("gates.in","r",stdin);
    freopen("gates.out","w",stdout);

    int n;
    cin>>n;
    string s;
    cin>>s;
    pair<int,int> coord={1000,1000};
    grid[coord.first][coord.second]=true;
    int x=2001,y=2001;
    
    map<char,pair<int,int>>dir{{'N',{-1,0}},{'S',{1,0}},{'E',{0,1}},{'W',{0,-1}}};
    for(int i=0;i<n;i++){
        grid[x+dir[s[i]].first][y+dir[s[i]].second]=true;
        grid[x+2*dir[s[i]].first][y+2*dir[s[i]].second]=true;
        x+=2*dir[s[i]].first;
        y+=2*dir[s[i]].second;
        minx=min(minx,x);
        maxx=max(maxx,x);
        miny=min(miny,y);
        maxy=max(maxy,y);
    }
    minx--;
    maxx++;
    miny--;
    maxy++;

    int ans=0;
    for(int i=minx;i<=maxx;i++){
        for(int j=miny;j<=maxy;j++){
            if(!visited[i][j]&&!grid[i][j]){
                floodfill(i,j);
                ans++;
            }
        }
    }
    cout<<ans-1<<endl;


    return 0;
}

